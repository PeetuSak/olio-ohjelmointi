#include "game.h"
using namespace std;

Game::Game(int maxNum): maxNumber(maxNum), numOfguesses(0)
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: object initialized with" << maxNumber << " as a maximum value" << endl;

}
Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{

    do{
        cout << "give your guess between 1-"<< maxNumber << endl;
        cin >> playerGuess;

        numOfguesses++;
        if (playerGuess > randomNumber){
            cout << "Your guess is too big"<< endl;
        }
        else if (playerGuess < randomNumber){
            cout << "Your guess is too small"<< endl;
        }
        else{
            cout << "Your guess is right = "<< playerGuess << endl;
            printGameResult();
        }

    } while (playerGuess != randomNumber);

}



void Game::printGameResult()
{
    cout<< "you guessed the right answer = " <<  randomNumber << " with " << numOfguesses << " guesses"<< endl;
}
