#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int secretNum = rand() % 10 + 1;
    int guess{};
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    cout << "Welcome!" << endl;
    cout << "A secret number between 1 to 10 has been selected. You have 3 turns to try to guess it." << endl;

    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "Out of guesses. The Secret Number was " << secretNum << endl;
        cout << "Better luck next time!";
    }
    else {
        cout << "You got it! The secret number was " << secretNum;
    }

    return 0;
}