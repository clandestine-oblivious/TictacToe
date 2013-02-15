#include "Player.h"
#include "Board.h"
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Game game;
    game.initialize();
    game.run();
    return 0;
}
