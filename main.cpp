/** @file main.cpp
 *  @brief The main file for the procedural project.
 * //Procedural Project created by Ravi Pathak
 * //Done during the course of COP 2001 in Summer of 2019.
 *
 *  @author Ravi Pathak
 *  @bug No known bugs currently.
 */

#include <iostream>

using namespace std;

/** @brief Creates the employee Account.
 *
 *  The functions takes info form the user and allows them
 *  to create a new Employee Account
 *
 *  @param none -- currently
 *  @return The word void or a description of what is returned
 */
void createEmployeeAccount();

/** @brief Creates the employee Account.
 *
 *  The functions takes info form the user and allows them
 *  to create a new Employee Account
 *
 *  @param none -- currently
 *  @return The word void or a description of what is returned
 */
void addMusicPlayer();

/** @brief Creates the employee Account.
 *
 *  The functions takes info form the user and allows them
 *  to create a new Employee Account
 *
 *  @param none -- currently
 *  @return The word void or a description of what is returned
 */
void addMoviePlayer();

/** @brief Creates the employee Account.
 *
 *  The functions takes info form the user and allows them
 *  to create a new Employee Account
 *
 *  @param none -- currently
 *  @return The word void or a description of what is returned
 */
void showProduceStats();

/** @brief Creates the employee Account.
 *
 *  The functions takes info form the user and allows them
 *  to create a new Employee Account
 *
 *  @param none -- currently
 *  @return The word void or a description of what is returned
 */
void closeProgram();


void invalidNumber();

int main() {

    //Prints out the statements
    cout << "Production Line Tracker\n" << endl;
    cout << "1. Add Employee Account\n";
    cout << "2. Add Music Player\n";
    cout << "3. Add Movie Player\n";
    cout << "4. Display Production Statistics\n";
    cout << "5. Exit\n";

    int selection;
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


}

void createEmployeeAccount() {
    cout << "You have selected to create an Employee account " << endl;
}

void addMusicPlayer() {
    cout << "You have selected to add a new Music Player " << endl;
    string manufacturer;
    string musicPlayerName;
    string musicType;

    cout << "Please enter the manufacturer: " << endl;
    cin >> manufacturer;

    cout << "Please enter the model Name: " << endl;
    cin >> musicPlayerName;

    
}

void addMoviePlayer() {
    cout << "You have selected to add a movie Player " << endl;
}

void showProduceStats() {
    cout << "You are looking to for the Production Statistics? " << endl;
}

void closeProgram() {
    cout << "You have selected to add a new Music Player " << endl;
}

void invalidNumber() {
    cout << "Sorry that's not an option" << endl;
}