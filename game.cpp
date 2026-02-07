#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char asciiInput;
    char endChoice;
    int computerChoice;
    int userWins = 0, computerWins = 0, draws = 0;

    srand(time(NULL));
                        
    cout << "\t===== ROCK PAPER SCISSORS GAME =====" << endl;
    cout << "Enter digit 1 to 3 only" << endl;
    cout << "1 = Rock, 2 = Paper, 3 = Scissors" << endl;

    while (true)
    {
        int userChoice = 0;
        cout << "Enter your choice (1-3): ";
        cin >> asciiInput;

        int asciiValue = int(asciiInput);

        if (asciiValue >= 49 && asciiValue <= 51)
        {

            userChoice = asciiInput - '0';
            computerChoice = rand() % 3 + 1;

            if (userChoice == computerChoice)
            {
                cout << "Result: Draw" << endl;
                draws++;
            }
            else if ((userChoice == 1 && computerChoice == 3) ||
                     (userChoice == 2 && computerChoice == 1) ||
                     (userChoice == 3 && computerChoice == 2))
            {
                cout << "Result: You Win" << endl;
                userWins++;
            }
            else
            {
                cout << "Result: Computer Wins" << endl;
                computerWins++;
            }
        }

        cout << "Do you want to end the game? (Y/N): ";
        cin >> endChoice;

        if (endChoice == 'Y' || endChoice == 'y')
        {
            break;
        }

        cout << endl;
    }
    cout << "\t===== FINAL SCORE =====" << endl;
    cout << "Your Wins     : " << userWins << endl;
    cout << "Computer Wins : " << computerWins << endl;
    cout << "Draws         : " << draws << endl;

    cout << "Overall Winner: ";
    if (userWins > computerWins)
    {
        cout << "YOU";
    }
    else if (computerWins > userWins)
    {
        cout << "COMPUTER";
    }
    else
    {
        cout << "DRAW";
    }

    return 0;
}