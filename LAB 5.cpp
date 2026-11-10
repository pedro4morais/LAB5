
// Name: Pedro Henrique Morais
// Lab 5 - Number Guessing Game
// Instructor: Busch

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void winMessage();
void loseMessage();
void replayMessage();

int main() {
    int number;
    int guess;
    int wins = 0;
    int losses = 0;
    bool won;
    char again;

    srand(time(0));

    // Play at least one game.
    do {
        number = rand() % 101;
        won = false;

        cout << "Number Guessing Game" << endl;
        cout << "Guess a number from 0 to 100." << endl;
        cout << "You have 20 tries." << endl;

        // Give the player up to 20 guesses.
        for (int attempt = 1; attempt <= 20; attempt++) {
            cout << "Guess " << attempt << ": ";
            cin >> guess;

            if (guess == number) {
                won = true;
                break;
            }
            else if (guess < number) {
                cout << "Too low!" << endl;
            }
            else {
                cout << "Too high!" << endl;
            }
        }

        // Show if the player won or lost.
        if (won) {
            wins++;
            cout << "You won!" << endl;
            winMessage();
        }
        else {
            losses++;
            cout << "You lost! The number was " << number << "." << endl;
            loseMessage();
        }

        // Ask if the player wants another game.
        replayMessage();
        cin >> again;
        cout << endl;

    } while (again == 'y' || again == 'Y');

    cout << "Total wins: " << wins << endl;
    cout << "Total losses: " << losses << endl;

    return 0;
}

// Choose one of 10 winning messages.
void winMessage() {
    switch (rand() % 10 + 1) {
    case 1:
        cout << "Great job!" << endl;
        break;
    case 2:
        cout << "Nice guess!" << endl;
        break;
    case 3:
        cout << "You got it!" << endl;
        break;
    case 4:
        cout << "Good work!" << endl;
        break;
    case 5:
        cout << "Awesome!" << endl;
        break;
    case 6:
        cout << "Well done!" << endl;
        break;
    case 7:
        cout << "Perfect guess!" << endl;
        break;
    case 8:
        cout << "Excellent!" << endl;
        break;
    case 9:
        cout << "Nice job!" << endl;
        break;
    case 10:
        cout << "Good guessing!" << endl;
        break;
    }
}

// Choose one of 10 losing messages.
void loseMessage() {
    switch (rand() % 10 + 1) {
    case 1:
        cout << "Good try!" << endl;
        break;
    case 2:
        cout << "Maybe next time!" << endl;
        break;
    case 3:
        cout << "Better luck next time!" << endl;
        break;
    case 4:
        cout << "Keep trying!" << endl;
        break;
    case 5:
        cout << "Nice effort!" << endl;
        break;
    case 6:
        cout << "That was a hard one!" << endl;
        break;
    case 7:
        cout << "Don't give up!" << endl;
        break;
    case 8:
        cout << "Try another round!" << endl;
        break;
    case 9:
        cout << "Not this time!" << endl;
        break;
    case 10:
        cout << "You can get it next time!" << endl;
        break;
    }
}

// Choose one of 10 questions to play again.
void replayMessage() {
    switch (rand() % 10 + 1) {
    case 1:
        cout << "Play again? (y/n): ";
        break;
    case 2:
        cout << "Another game? (y/n): ";
        break;
    case 3:
        cout << "Try again? (y/n): ";
        break;
    case 4:
        cout << "One more game? (y/n): ";
        break;
    case 5:
        cout << "Keep playing? (y/n): ";
        break;
    case 6:
        cout << "Another round? (y/n): ";
        break;
    case 7:
        cout << "Play one more time? (y/n): ";
        break;
    case 8:
        cout << "Want another game? (y/n): ";
        break;
    case 9:
        cout << "Want to try again? (y/n): ";
        break;
    case 10:
        cout << "Ready for another round? (y/n): ";
        break;
    }
}
