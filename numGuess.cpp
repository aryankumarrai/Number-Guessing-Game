#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    
    cout << "Guess a number between 1 and 100: ";
    
    while (true) {
        cin >> guess;
        if (guess < numberToGuess) {
            cout << "Too low. Try again: ";
        }
        else if (guess > numberToGuess) {
            cout << "Too high. Try again: ";
        }
        else if (guess == numberToGuess) {
            cout << "Excellent! You guessed the number! Would you like to play again (y or n)? ";
            char choice;
            cin >> choice;
            if (choice == 'y' || choice == 'Y') {
                playGame();
            } 
            else {
                cout << "Thanks for playing!\n";
                break;
            }
        }
    }
}

int main() {
    playGame();
    return 0;
}
