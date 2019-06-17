/** @file main.cpp
 *  @brief The main file for the procedural project.
 * //Procedural Project created by Ravi Pathak
 * //Done during the course of COP 2001 in Summer of 2019.
 *
 *  @author Ravi Pathak
<<<<<<< HEAD
 *  @bug No known bugs currently .
 */

#include <iostream>
=======
 *  @bug The first bug discovered was a break when an infinite loop is creating if the exit (5) is pressed in the menu
 *  and then replies to reprint the menu
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
>>>>>>> 6aa527713ac62d1e20e53d614a404af77886e638
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
<<<<<<< HEAD
    } while (repeat == 'Y' ); // The do while loop was created from the CSO Chapter 5 slide 33
=======
    } while (repeat == 'Y' || repeat == 'y'); // The do while loop was created from the CSO Chapter 5 slide 33
>>>>>>> 6aa527713ac62d1e20e53d614a404af77886e638
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

    string manufacturer; //Setting up variables for input later down in the function
    string musicPlayerName;
    string musicType;
    int musicTypeMenu; //integers for the menu

    cout << "Please enter the manufacturer: " << endl;
    cin >> manufacturer;
    //Getting the users input for the manufacturer and model name

    cout << "Please enter the model Name: " << endl;
    cin >> musicPlayerName;

<<<<<<< HEAD
=======
    cout << "Please select the item type from the menu: " << endl; //Printing the menu and getting input
    cout << "1) MM - Audio " << endl;
    cout << "2) VI - Visual " << endl;
    cout << "3) AM - Audio Mobile " << endl;
    cout << "4) VM - Visual Mobile " << endl;
    cin >> musicTypeMenu; // user inputting


    //if statement to check for what the user inputted in the menu to assign it to the string
    if (musicTypeMenu == 1) {
        cout << "You have selected Audio for the music Type. " << endl;
        musicType = "MM";
    } else if (musicTypeMenu == 2) {
        cout << "You have selected Visual for the music Type. " << endl;
        musicType = "VI";
    } else if (musicTypeMenu == 3) {
        cout << "You have selected Audio Mobile for the music Type. " << endl;
        musicType = "AM";
    } else if (musicTypeMenu == 4) {
        cout << "You have selected Visual Mobile for the music Type. " << endl;
        musicType = "VM";
    } else {
        cout << "Please select an item number from the menu. " << endl;
    }

    cout << "Please enter the amount of items you want produced: " << endl;
    int numProduced;
    cin >> numProduced;

    int keepProductionTrack;
    ofstream productionFile;
    productionFile.open("productionHolder.txt", ios::app);
                //Check to see if the file has 5 lines of data for the production start
    string line;
    while(getline(productionFile, line)){

    }
    productionFile.close();

    //User inputs the number of items they want produced
    ofstream myfile;
    myfile.open("musicPlayer.txt", ios::app);
    string serialName = manufacturer.substr(0, 3);
    for (int i = 0; i <= numProduced; i++) {


        //Above the musicPlayer txt file opens and then the for loop allows to create multiple product

        myfile << "Production Number " << keepProductionTrack << ": Serial Number: " << serialName << musicType << setw(5)
               << setfill('0') << i << endl;


    }
    myfile.close();
>>>>>>> 6aa527713ac62d1e20e53d614a404af77886e638
}

void addMoviePlayer() {
    cout << "You have selected to add a movie Player " << endl;
<<<<<<< HEAD

    cout << "Please enter the format: ";
    string movieFormat;
    cin >> movieFormat;

    cout << "Please enter the media Type: " << endl;
    string movieMediaType;
    cin >> movieMediaType;
=======
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
>>>>>>> 6aa527713ac62d1e20e53d614a404af77886e638

}

void showProduceStats() {
    cout << "You are looking to for the Production Statistics? " << endl;
}

void closeProgram() {
<<<<<<< HEAD
    cout << "Good Bye! " << endl;
}

void invalidNumber() {
    cout << "Sorry that's not an option" << endl;
}

void printMenu(){
    //Prints out the statements
=======
    cout << "Good Bye! " << endl; //closes program
}

void invalidNumber() {
    cout << "Sorry that's not an option" << endl; //validation for the menu
}

void printMenu() {
    //Prints out the statements for the menu
>>>>>>> 6aa527713ac62d1e20e53d614a404af77886e638
    cout << "Production Line Tracker\n" << endl;
    cout << "1. Add Employee Account\n";
    cout << "2. Add Music Player\n";
    cout << "3. Add Movie Player\n";
    cout << "4. Display Production Statistics\n";
    cout << "5. Exit\n";
}