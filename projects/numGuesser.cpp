#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int num = rand() % 100 + 1;
    cout << "I am thinking of a number from 1 through 100. "<<endl;

    bool guessed = false;

    do {
        int guess;
        cout << "Guess: " << endl;
        cin >> guess;
        if (guess == num)
        {
            cout << "That's right!" << endl;
            guessed = true;
        }
        else if (guess > num)
        {
            cout << "Too high!" << endl;
        }
        else {
            cout << "Too low! " << endl;
        }

    } while (!guessed);


}