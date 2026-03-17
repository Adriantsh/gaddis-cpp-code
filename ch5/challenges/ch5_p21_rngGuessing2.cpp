// Generate a random number and ask the user to guess it
// Keep count of the number of guesses
// Modified from ch5_p20_rngGuessing.cpp
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUM = 0, MAX_NUM = 100;
    int num, guess, num_guesses = 1;
    unsigned seed;
        
    seed = time(0);
    srand(seed);
    num = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

    cout << "Guess a number between " << MIN_NUM << " and "
         << MAX_NUM << ", inclusive.\n";
    cin >> guess;

    while (guess != num)
    {
        if (guess < num)
            cout << "Your guess was too low. Guess again.\n";
        else if (guess > num)
            cout << "Your guess was too high. Guess again.\n";
        cin >> guess;
        num_guesses++;
    }
    
    cout << "Congrats! You guessed correctly on guess number " 
         << num_guesses << "!\n";
         
    return 0;
}