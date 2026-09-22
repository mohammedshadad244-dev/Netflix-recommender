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

    //Get the user name  
 string userName;
do {
    cout << "Please enter your name!" << endl;
    getline(cin, userName);
if (userName.find_first_not_of(' ') == string::npos)
    {
    cout << "Name Cannot Be an Empty Space!" << endl;
    cout << "Please Try Again" << endl << endl;
    }
else
   {
    userName.erase(0, userName.find_first_not_of(' '));
    userName.erase(userName.find_last_not_of(' ') + 1);
    cout << "Hello " << userName << "! Let's find a movie for you" << endl << endl;
   }

} while (userName.find_first_not_of(' ') == string::npos);

    //Show genre menu
 char playAgain;

    do {
        //Show genre menu
        int genreChoice;
        cout << "Select a genre:" << endl;
        cout << "1. Action" << endl;
        cout << "2. Comedy" << endl;
        cout << "3. Horror" << endl;
        cout << "4. Romance" << endl;
        cout << "5. Documentary" << endl;
        cout << endl;
        cout << "Enter your choice (1-5): ";
        cin >> genreChoice;
        cout << endl;

        //Validate genre input
        if (genreChoice < 1 || genreChoice > 5) {
            cout << "========================================" << endl;
            cout << "  Invalid choice! Please enter a number" << endl;
            cout << "  between 1 and 5." << endl;
            cout << "========================================" << endl;
        } else {

            //Ask for mood (used for Action and Comedy)
            int moodChoice;
            if (genreChoice == 1 || genreChoice == 2) {
                cout << "What is your mood right now?" << endl;
                cout << "1. Excited / High energy" << endl;
                cout << "2. Relaxed / Chill" << endl;
                cout << "Enter your mood (1-2): ";
                cin >> moodChoice;
                cout << endl;
            }

            //Recommend a movie based on genre and mood
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
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Mad Max: Fury Road (2015)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : A relentless, near-nonstop chase across a post-" << endl;
                        cout << "         apocalyptic wasteland." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : The Dark Knight (2008)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : Batman faces the Joker, who plunges Gotham into" << endl;
                        cout << "         chaos and anarchy." << endl;
                        cout << "Movie  : The Odyssey (2026)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : Christopher Nolan brings his big-screen vision" << endl;
                        cout << "         to the Greek epic." << endl;
                    } else if (moodChoice == 2) {
                        cout << "Movie  : The Old Guard (2020)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : A group of immortal mercenaries fight to keep" << endl;
                        cout << "         their secret — with a slower, thoughtful pace." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Bullet Train (2022)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : An unlucky assassin finds his mission on a bullet train" << endl;
                        cout << "         colliding with four other killers." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Bad Boys: Ride or Die (2024)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : The clashing Miami duo returns to take" << endl;
                        cout << "         down a tech-obsessed drug lord." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Mission: Impossible – The Final Reckoning (2025)" << endl;
                        cout << "Genre  : Action" << endl;
                        cout << "About  : Ethan Hunt confronts the full scope of the AI threat" << endl;
                        cout << "         in the series' biggest set pieces yet." << endl;
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
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Deadpool (2016)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : A wisecracking mercenary breaks the fourth wall" << endl;
                        cout << "         while fighting to save the woman he loves." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Jumanji: Welcome to the Jungle (2017)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : Four teens are sucked into a video game and must survive" << endl;
                        cout << "         the jungle as different characters." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Diary of a Wimpy Kid: Rodrick Rules (2011)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : Greg faces his annoying older brother, a new kid at school," << endl;
                        cout << "         and a talent show disaster." << endl;
                    } else if (moodChoice == 2) {
                        cout << "Movie  : The Mitchells vs. the Machines (2021)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : A quirky family road trip turns into a mission" << endl;
                        cout << "         to save the world from a robot uprising." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Toy Story 5 (2026)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : Andy's toys face a new challenge in the latest chapter" << endl;
                        cout << "         of the beloved franchise." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : The Intern (2015)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : A retired widower becomes a senior intern at a" << endl;
                        cout << "         startup run by a young tech CEO." << endl;
                        cout << "----------------------------------------------------------------" << endl;
                        cout << "Movie  : Splitsville (2025)" << endl;
                        cout << "Genre  : Comedy" << endl;
                        cout << "About  : A couple on the brink of divorce agrees to a trial separation" << endl;
                        cout << "         that goes hilariously sideways." << endl;
                    } else {
                        cout << "Invalid mood choice." << endl;
                    }
                    break;

                case 3: // Horror
                    cout << "Movie  : The Haunting of Hill House (2018)" << endl;
                    cout << "Genre  : Horror" << endl;
                    cout << "About  : A family confronts haunting memories of the" << endl;
                    cout << "         mysterious house they grew up in." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : The Exorcist (1973)" << endl;
                    cout << "Genre  : Horror" << endl;
                    cout << "About  : A young girl is possessed by a demonic force, and two priests" << endl;
                    cout << "         attempt a desperate exorcism." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : It (2017)" << endl;
                    cout << "Genre  : Horror" << endl;
                    cout << "About  : A group of kids in a small town face an ancient evil" << endl;
                    cout << "         that takes the form of a clown." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : Obsession (2026)" << endl;
                    cout << "Genre  : Horror" << endl;
                    cout << "About  : A hopeless romantic breaks a mysterious willow to win his crush's heart," << endl;
                    cout << "         but the wish comes at a dark price." << endl;   
                    break;

                case 4: // Romance
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : To All the Boys I've Loved Before (2018)" << endl;
                    cout << "Genre  : Romance" << endl;
                    cout << "About  : A teenage girl's secret love letters are" << endl;
                    cout << "         accidentally sent out to all her crushes." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : La La Land (2016)" << endl;
                    cout << "Genre  : Romance" << endl;
                    cout << "About  : A jazz pianist and an aspiring actress fall in love" << endl;
                    cout << "         while chasing their dreams in LA." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : Titanic (1997)" << endl;
                    cout << "Genre  : Romance" << endl;
                    cout << "About  : A poor artist and a wealthy woman fall in love" << endl;
                    cout << "         aboard the doomed ocean liner." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : Me Before You (2016)" << endl;
                    cout << "Genre  : Romance" << endl;
                    cout << "About  : A young caregiver falls in love with her quadriplegic employer," << endl;
                    cout << "         who is planning to end his life." << endl;
                    break;

                case 5: // Documentary
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : Our Planet (2019)" << endl;
                    cout << "Genre  : Documentary" << endl;
                    cout << "About  : A stunning visual journey through Earth's" << endl;
                    cout << "         remaining wild places and wildlife." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : What's My Name: Muhammad Ali (2019)" << endl;
                    cout << "Genre  : Documentary" << endl;
                    cout << "About  : A documentary using Ali's own voice and archival footage" << endl;
                    cout << "         to tell his story in his own words." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : Inside the Manosphere (2026)" << endl;
                    cout << "Genre  : Documentary" << endl;
                    cout << "About  : Louis Theroux explores the world of online male radicalization" << endl;
                    cout << "         and its real-world consequences." << endl;
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "Movie  : The Jinx (2015)" << endl;
                    cout << "Genre  : Documentary" << endl;
                    cout << "About  : The life and suspicious deaths surrounding" << endl;
                    cout << "         Robert Durst, ending in a confessional tape." << endl;
                    break;
            }
            cout << "========================================" << endl;
        }

        //Ask if user wants another recommendation
        cout << endl;
        cout << "Would you like another recommendation? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');

        //Goodbye message 
    cout << "========================================" << endl;
    cout << "  Thanks for using Netflix Recommender!" << endl;
    cout << "  Enjoy your movie, " << userName << "!" << endl;
    cout << "========================================" << endl;


    return 0;
}
