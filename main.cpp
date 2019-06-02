/** @file main.cpp
 *  @brief The main file for the procedural project.
 * //Procedural Project created by Ravi Pathak
 * //Done during the course of COP 2001 in Summer of 2019.
 *
 *  @author Ravi Pathak
 *  @bug No known bugs currently .
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include "prototype.h"

using namespace std;

int main() {
    int selection;
    char repeat;
    do {
        printMenu();

        cout << "Please make your selection" << endl;
        cin >> selection;


        switch (selection) {
            case 1:
                createEmployeeAccount();
                break;
            case 2:
                addMusicPlayer();
                break;
            case 3:
                addMoviePlayer();
                break;
            case 4:
                showProduceStats();
                break;
            case 5:
                closeProgram();
                break;
            default:
                invalidNumber();
        }

        while (selection >= 6 || selection <= 0) {
            printMenu();
            cout << "Please reselect a number from the menu:" << endl;
            cin >> selection;
        }
        cout << "Would you like to go back to the menu? " << endl;
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y' ); // The do while loop was created from the CSO Chapter 5 slide 33
}

void createEmployeeAccount() {
    cout << "You have selected to create an Employee account " << endl;
    cout << "Please enter the Employee Name: " << endl;

    string employeeName;
    char employeeLast;
    int employeeFavNumber;

    cin >> employeeName;
    cout << "PLease enter the employee's last name initial: " << endl;
    cin >> employeeLast;
    cout << "Please enter a favorite number to be assosciated with the employee: " << endl;
    cin >> employeeFavNumber;


}

void addMusicPlayer() {
    cout << "You have selected to add a new Music Player " << endl;

    string manufacturer;
    string musicPlayerName;
    string musicType;
    int musicTypeMenu;

    cout << "Please enter the manufacturer: " << endl;
    cin >> manufacturer;

    cout << "Please enter the model Name: " << endl;
    cin >> musicPlayerName;

    cout << "Please select the item type from the menu: " << endl;
    cout << "1) MM - Audio " << endl;
    cout << "2) VI - Visual " << endl;
    cout << "3) AM - Audio Mobile " << endl;
    cout << "4) VM - Visual Mobile " << endl;
    cin >> musicTypeMenu;

    if (musicTypeMenu == 1) {
        cout << "You have selected Audio for the music Type. " << endl;
        musicType = "MM";
    } else if (musicTypeMenu == 2) {
        cout << "You have selected Visual for the music Type. " << endl;
        musicType = "VI";
    } else if (musicTypeMenu == 3){
        cout << "You have selected Audio Mobile for the music Type. " << endl;
        musicType = "AM";
    } else if (musicTypeMenu == 4){
        cout << "You have selected Visual Mobile for the music Type. " << endl;
        musicType = "VM";
    } else {
        cout << "Please select an item number from the menu. " << endl;
    }

    cout << "Please enter the amount of items you want produced: " << endl;
    int numProduced;
    cin >> numProduced;

    ofstream myfile;
    myfile.open("musicPlayer.txt", ios::app);
    string serialName = manufacturer.substr(0,3);
    for(int i = 1;i <= numProduced; i++){


        myfile << "Production Number " << i << ": Serial Number: " << serialName << musicType << setw(5)
        << setfill('0') << i << endl;


    }
    myfile.close();
}

void addMoviePlayer() {
    cout << "You have selected to add a movie Player " << endl;
    string movieFormat;
    int formatMenu;

    cout << "Please select the format from the menu: " << endl;
    cout << "1) WAV " << endl;
    cout << "2) MP3 " << endl;
    cin >> formatMenu;

    if (formatMenu == 1) {
        cout << "You have selected WAV " << endl;
        movieFormat = "WAV";
    } else if (formatMenu == 2) {
        cout << "You have selected MP3 " << endl;
        movieFormat = "MP3";
    } else {
       cout << "Please pick another item" << endl;
        cin >> formatMenu;
    }


    cout << "Please select the media Type: " << endl;
    cout << "1) CD " << endl;
    cout << "2) DVD " << endl;
    cout << "3) Blu-Ray " << endl;

    string movieMediaType;
    int mediaTypeMenu;
    cin >> mediaTypeMenu;

    if (mediaTypeMenu == 1){
        cout << "You have selected CD " << endl;
        movieMediaType = "CD ";
    } else if (mediaTypeMenu == 2) {
        cout << "You have selected DVD " << endl;
        movieMediaType = "DVD ";
    } else if (mediaTypeMenu == 3) {
        cout << "You have selected Blu-Ray" << endl;
        movieMediaType = "Blu-Ray ";
    } else {
        cout << "Please repick from the menu: " << endl;
        cin >> mediaTypeMenu;
    }

}

void showProduceStats() {
    cout << "You are looking to for the Production Statistics? " << endl;
}

void closeProgram() {
    cout << "Good Bye! " << endl;
}

void invalidNumber() {
    cout << "Sorry that's not an option" << endl;
}

void printMenu(){
    //Prints out the statements
    cout << "Production Line Tracker\n" << endl;
    cout << "1. Add Employee Account\n";
    cout << "2. Add Music Player\n";
    cout << "3. Add Movie Player\n";
    cout << "4. Display Production Statistics\n";
    cout << "5. Exit\n";
}