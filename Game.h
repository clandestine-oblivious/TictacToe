#include <string>
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "Board.h"
#include "Player.h"
using namespace std;

class Game
{
    public:
        Game();
        virtual ~Game();
        void run();
        void initialize();
        void update();
        void render();
        bool checkWin();
        void switchPlayer();

    protected:
    private:
            Board m_board;
            Player m_p1;
            Player m_p2;
            Player *m_currPlayer;
            bool m_isComplete;
};

#endif // GAME_H
