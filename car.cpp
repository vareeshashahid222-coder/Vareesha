#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void drawRoad(int playerLane, int enemyLane, int score) {
    system("cls");

    cout << "=========== CAR GAME ===========" << endl;
    cout << "Score: " << score << endl << endl;
    
    for (int lane = 1; lane <= 3; lane++) {
        if (lane == enemyLane) cout << "   Z   ";
        else cout << "       ";
    }
    cout << endl;

    for (int lane = 1; lane <= 3; lane++) {
        if (lane == enemyLane) cout << "  /#\\  ";
        else cout << "       ";
    }
    cout << endl;

    for (int lane = 1; lane <= 3; lane++) {
        if (lane == enemyLane) cout << "  O O  ";
        else cout << "       ";
    }
    cout << endl << endl;

    cout << "-------------------------------" << endl << endl;

    for (int lane = 1; lane <= 3; lane++) {
        if (lane == playerLane) cout << "   V   ";
        else cout << "       ";
    }
    cout << endl;

    for (int lane = 1; lane <= 3; lane++) {
        if (lane == playerLane) cout << "  /#\\  ";
        else cout << "       ";
    }
    cout << endl;

    for (int lane = 1; lane <= 3; lane++) {
        if (lane == playerLane) cout << "  O O  ";
        else cout << "       ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    char playAgain;

    do {
        int playerLane = 2;  
        int enemyLane;
        int score = 0;

        while (true) {
            enemyLane = rand() % 3 + 1;

            drawRoad(playerLane, enemyLane, score);

            cout << "Enter lane (1 to 3): ";
            cin >> playerLane;

            if (playerLane == enemyLane) {
                drawRoad(playerLane, enemyLane, score);
                cout << "CAR CRASHED!"<<endl;
                cout << "GAME OVER"<<endl;
                cout << "Final Score: " << score << endl;
                break;
            }

            score++;
        }

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}