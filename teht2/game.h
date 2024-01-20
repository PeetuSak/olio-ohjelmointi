#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstddef>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game
{
public:
    Game(int maxNum);

    void play();

    ~Game();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfguesses;

    void printGameResult();
};
#endif // GAME_H
