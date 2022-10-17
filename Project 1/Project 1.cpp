#include "Clock.h"
#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;

bool validateMenuChoice(int value, int min, int max) {  // creates the valid menu options
    value = (1, 2, 3);
    min = 1;
    max = 3;

    if (value == 1) {                   // if 1 is chosen it is in the valid range
        return true;
    }
    else if (value == 2) {              // if 2 is chosen it is in the valid range
        return true;
    }
    else if (value == 3) {              // if 3 is chosen it is in the valid range
        return true;
    }
    else if (min < 1) {                 // if the value is less than 1 it isnt in valid range
        return false;
    }
    else if (max > 3) {                 // if the value is more than 3 it isnt in valid range
        return false;
    }
    
}

void handleInvalidInput(int min, int max) {              // prints error message and provides the valid range to user
    if (min < 1) {
        cout << "Invalid entry. Valid range is [" << min << max << "]" << endl;
    }
    else if (max > 3) {
        cout << "Invalid entry. Valid range is [" << min << max << "]" << endl;
    }
    
}

void printMainMenu() {
    cout << "*********************************" << endl;
    cout << "* 1 - Display clock             *" << endl;
    cout << "* 2 - Update clock              *" << endl;             // prints the main menu options
    cout << "* 3 - Exit program              *" << endl;
    cout << "*********************************" << endl;
}

void printMenu() {
    cout << "************************************" << endl;
    cout << "* 1 - Add one hour                 *" << endl;
    cout << "* 2 - Add one minute               *" << endl;
    cout << "* 3 - Add one second               *" << endl;          // prints the menu to update the time
    cout << "* 4 - Exit to end the program      *" << endl;
    cout << "************************************" << endl;
}


void printClock(Clock clock) {
    cout << "24-HOUR CLOCK" << "    " << "12-HOUR CLOCK" << endl;
    cout << "  " << clock.get24HourFormat() << "        " << clock.get12HourFormat() << endl;

    // prints the clock's 12 hour and 24 hour formats
}




int main()
{
    
    //TODO constants for menu choices
   // const int menuChoiceUpdateDisplay = 1;
   // const int menuChoiceUpdateClock = 2;
   // const int menuChoiceAddHour = 1;
   // const int menuChoiceAddMinute = 2;
   // const int menuChoiceAddSecond = 3;
    int min = 1;
    int max = 3;                // I tried to implement the const int variables for better readability,
    int userChoice = 0;         // but I started recieveing errors..
    
 
    
    Clock clock(0,0,0);                           //Create the clock instance

    bool keepRunning = true;

    do {
        system("cls");                               //Clear the console screen
        printClock(clock);                           //Display the clock times
        
        printMainMenu();                             //Display main menu
                                            
        cout << " " << endl;
        cout << "Enter a selection: " << endl;         // prompts user to enter a choice

        int userChoice;
        cin >> userChoice;

        while (validateMenuChoice(userChoice, min, max) == false) {    // validating menu choice
            handleInvalidInput(min, max);
            cin >> userChoice;
        }

        if (userChoice == 1) {                // if the choice is 1 (add second) in the main menu
            clock.addSecond();
        }
        else if (userChoice == 2) {           // if the choice is 2 (update clock menu) in the main menu
            printMenu();                      // prints menu update clock menu
            cin >> userChoice;                // gets user input

            if (userChoice == 1) {            // if the choice is 1 in the update clock menu
                clock.addHour();              // adds hour to clock
            }
            else if (userChoice == 2) {       // if the choice is 2 in the update clock menu
                clock.addMinute();            // adds minute to clock
            }
            else if (userChoice == 3) {       // if the choice is 3 in the update clock menu
                clock.addSecond();            // adds second to clock
            }
        }
        else {
            keepRunning = false;       // ends program if not in valid range
        }

    } while (keepRunning);      // evaluate options

    return 0;      // exit
}
