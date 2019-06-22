/** @file main.cpp
 *  @brief The main file for the procedural project.
 * //Procedural Project created by Ravi Pathak
 * //Done during the course of COP 2001 in Summer of 2019.
 *
 *  @author Ravi Pathak
 *  @bug The first bug discovered was a break when an infinite loop is creating if the exit (5) is pressed in the menu
 *  and then replies to reprint the menu
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include "prototype.h"

using namespace std;

struct product {
    string manufacter;
    string modelName;
    string productType;
    int productionNumber;
    string productionSerialNumber;
};


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
    } while (repeat == 'Y' || repeat == 'y'); // The do while loop was created from the CSO Chapter 5 slide 33
}

void createEmployeeAccount() {
    cout << "You have selected to create an Employee account " << endl;
    cout << "Please enter the Employee Name: " << endl;

    string employeeName;
    string employeeLast;
    int employeeFavNumber;

    cin >> employeeName;
    cout << "PLease enter the employee's surname: " << endl;
    cin >> employeeLast;
    cout << "Please enter a favorite number to be assosciated with the employee: " << endl;
    cin >> employeeFavNumber;

    for(int i =0; i < employeeFavNumber; i++){

    }

}

void addMusicPlayer() {
    vector <product> catalog;

    cout << "You have selected to add a new Music Player " << endl;
    product sample;

    sample.manufacter = "Apple";
    sample.modelName = "ipod ";
    sample.productType = "VI";
    sample.productionNumber = 1;
    sample.productionSerialNumber = "0001";

    catalog.push_back(sample);

    int musicTypeMenu;
    string productName;
    string productModel;

    //Above is where i got lost ^^ I tried to make the vector and then I wanted it to pushback the input
    // But never got it to work so I stopped.


    cout << "Please enter the manufacturer: " << endl;
    cin >> productName;

    //Getting the users input for the manufacturer and model name

    cout << "Please enter the model Name: " << endl;
    cin >> productModel;

    cout << "Please select the item type from the menu: " << endl; //Printing the menu and getting input
    cout << "1) MM - Audio " << endl;
    cout << "2) VI - Visual " << endl;
    cout << "3) AM - Audio Mobile " << endl;
    cout << "4) VM - Visual Mobile " << endl;
    cin >> musicTypeMenu; // user inputting


    //if statement to check for what the user inputted in the menu to assign it to the string
    if (musicTypeMenu == 1) {
        cout << "You have selected Audio for the music Type. " << endl;
        //musicType = "MM";
    } else if (musicTypeMenu == 2) {
        cout << "You have selected Visual for the music Type. " << endl;
        //musicType = "VI";
    } else if (musicTypeMenu == 3) {
        cout << "You have selected Audio Mobile for the music Type. " << endl;
        //musicType = "AM";
    } else if (musicTypeMenu == 4) {
        cout << "You have selected Visual Mobile for the music Type. " << endl;
        //musicType = "VM";
    } else {
        cout << "Please select an item number from the menu. " << endl;
    }

    cout << "Please enter the amount of items you want produced: " << endl;
    int numProduced;
    cin >> numProduced;


    ifstream totalNumber;
    totalNumber.open("productionHolder.txt", ios::app);
    int totalProduction = 0;
    int numMM = 0;
    int numVI = 0;
    int numAM = 0;
    int numVM = 0;
    if (totalNumber) {
        totalNumber >> totalProduction >> numMM >> numVI >> numAM >> numVM;
    }
    totalNumber.close();



    //User inputs the number of items they want produced
    ofstream myfile;
    myfile.open("catalog.txt", ios::app);
    string serialName = productName.substr(0, 3);
    for (int i = 0; i <= numProduced; i++) {

        //Above the musicPlayer txt file opens and then the for loop allows to create multiple product

        myfile << "Production Number " << totalProduction << ": Serial Number: " << serialName << setw(5)
               << setfill('0') << i << endl;

    }

    myfile.close();
}

void addMoviePlayer() {
    cout << "You have selected to add a movie Player " << endl;
    string movieFormat; //string input for the format type
    int formatMenu; // to pick from the menu

    cout << "Please select the format from the menu: " << endl;
    cout << "1) WAV " << endl;
    cout << "2) MP3 " << endl;
    cin >> formatMenu; // getting input from the user for the mnenu

    //Statement checks to see what the input was and depending on the int from the menu it
    //assigns the the string movieFormat to its correct format
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

    //gets the input from user on movie player
    cout << "Please select the media Type: " << endl;
    cout << "1) CD " << endl;
    cout << "2) DVD " << endl;
    cout << "3) Blu-Ray " << endl;

    string movieMediaType;
    int mediaTypeMenu;
    cin >> mediaTypeMenu;

    if (mediaTypeMenu == 1) {
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
    cout << "Good Bye! " << endl; //closes program
}

void invalidNumber() {
    cout << "Sorry that's not an option" << endl; //validation for the menu
}

void printMenu() {
    //Prints out the statements for the menu
    cout << "Production Line Tracker\n" << endl;
    cout << "1. Add Employee Account\n";
    cout << "2. Add Music Player\n";
    cout << "3. Add Movie Player\n";
    cout << "4. Display Production Statistics\n";
    cout << "5. Exit\n";
}