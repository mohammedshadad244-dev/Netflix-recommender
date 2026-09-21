#include <iostream>
#include <string>

using namespace std;

int main() {

cout << "========================================" << endl;
    cout << "Netflix Movie Recommendation Assistant" << endl;
    cout << "========================================" << endl;
    cout << "Welcome! This program suggests movies" << endl;
    cout << "based on your preferences." << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Press Enter to continue...";
    cin.ignore();  // Wait for user to press Enter

    //Get the user name

string userName;
    cout << "Please enter your username!" << endl;
    cin >> userName;
    cout << "Hello " << userName << "! Let's find a movie for you" << endl << endl;

    //Show genre menu

int genreChoice;
    cout << "Select a Genre:" << endl;
    cout << "1. Action" << endl;
    cout << "2. Romance" << endl;
    cout << "3. Horror" << endl;
    cout << "4. Comedy" << endl;
    cout << "5. Documentary" << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter your choice! (1-5)" << endl;
    cin >> genreChoice;

    // Confirm what the user picked
    cout << endl;
    cout << "You selected option " << genreChoice << "." << endl;



    return 0;
}
