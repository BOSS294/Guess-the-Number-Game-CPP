#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;
    
    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    
    while (++attempts <= maxAttempts) {
        cout << "Attempt " << attempts << ": ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed it." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low." << endl;
        } else {
            cout << "Too high." << endl;
        }

        if (attempts == maxAttempts) {
            cout << "Out of attempts. The number was " << secretNumber << "." << endl;
            break;
        }
    }

    return 0;
}
