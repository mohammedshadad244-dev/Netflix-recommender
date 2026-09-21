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



    // --- Ask for mood (used for Action and Comedy) ---
    int moodChoice;
    if (genreChoice == 1 || genreChoice == 2) {
        cout << "What is your mood right now?" << endl;
        cout << "1. Excited / High energy" << endl;
        cout << "2. Relaxed / Chill" << endl;
        cout << "Enter your mood (1-2): ";
        cin >> moodChoice;
        cout << endl;
    }


 // --- Recommend a movie based on genre choice ---
    cout << "========================================" << endl;
    cout << "   Here is your recommendation, " << userName << "!" << endl;
    cout << "========================================" << endl;

    switch (genreChoice) {
        case 1: // Action
            if (moodChoice == 1) {
                cout << "Movie  : Extraction (2020)" << endl;
                cout << "Genre  : Action" << endl;
                cout << "About  : A mercenary fights through dangerous territory" << endl;
                cout << "         to rescue a kidnapped boy. Non-stop intensity." << endl;
            } else if (moodChoice == 2) {
                cout << "Movie  : The Old Guard (2020)" << endl;
                cout << "Genre  : Action" << endl;
                cout << "About  : A group of immortal mercenaries fight to keep" << endl;
                cout << "         their secret — with a slower, thoughtful pace." << endl;
            } else {
                cout << "Invalid mood choice." << endl;
            }
            break;

        case 2: // Comedy
            if (moodChoice == 1) {
                cout << "Movie  : Murder Mystery (2019)" << endl;
                cout << "Genre  : Comedy" << endl;
                cout << "About  : A couple accidentally gets mixed up in a wild" << endl;
                cout << "         murder mystery on a European vacation." << endl;
            } else if (moodChoice == 2) {
                cout << "Movie  : The Mitchells vs. the Machines (2021)" << endl;
                cout << "Genre  : Comedy" << endl;
                cout << "About  : A quirky family road trip turns into a mission" << endl;
                cout << "         to save the world from a robot uprising." << endl;
            } else {
                cout << "Invalid mood choice." << endl;
            }
            break;

        case 3:
            cout << "Movie  : The Haunting of Hill House (2018)" << endl;
            cout << "Genre  : Horror" << endl;
            cout << "About  : A family confronts haunting memories of the" << endl;
            cout << "mysterious house they grew up in." << endl;
            break;

        case 4:
            cout << "Movie  : To All the Boys I've Loved Before (2018)" << endl;
            cout << "Genre  : Romance" << endl;
            cout << "About  : A teenage girl's secret love letters are" << endl;
            cout << "accidentally sent out to all her crushes." << endl;
            break;

        case 5:
            cout << "Movie  : Our Planet (2019)" << endl;
            cout << "Genre  : Documentary" << endl;
            cout << "About  : A stunning visual journey through Earth's" << endl;
            cout << "remaining wild places and wildlife." << endl;
            break;

        default:
            cout << "Invalid choice. Please run the program again" << endl;
            cout << "and enter a number between 1 and 5." << endl;
    }

    cout << "========================================" << endl;

    return 0;
}
