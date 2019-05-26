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

    }


}

void createEmployeeAccount() {
    cout << "You have are trying to add an Employee Account " << endl;
}