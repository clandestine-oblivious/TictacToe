#include "Game.h"
#include "Player.h"
#include "Board.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game::initialize()
{

    m_board.initialize();
    m_p1.SetName("Player 1");
    m_p1.SetIcon('X');
    m_p2.SetName("Player 2");
    m_p2.SetIcon('O');
    m_currPlayer = &m_p1;
    m_board.render();
}

void Game::run()
{
    while (!m_isComplete)
    {
        update();
        //render();
    }
}




bool Game::checkWin()
{
    if ((m_board.box[0]==m_board.box[1])&&(m_board.box[1]==m_board.box[2]))
        return 1;
    else if ((m_board.box[3]==m_board.box[4])&&(m_board.box[4]==m_board.box[5]))
        return 1;
    else if ((m_board.box[6]==m_board.box[7])&&(m_board.box[7]==m_board.box[8]))
        return 1;
    else if ((m_board.box[0]==m_board.box[3])&&(m_board.box[3]==m_board.box[6]))
        return 1;
    else if ((m_board.box[1]==m_board.box[4])&&(m_board.box[4]==m_board.box[7]))
        return 1;
    else if ((m_board.box[2]==m_board.box[5])&&(m_board.box[5]==m_board.box[8]))
        return 1;
    else if ((m_board.box[0]==m_board.box[4])&&(m_board.box[4]==m_board.box[8]))
        return 1;
    else if ((m_board.box[2]==m_board.box[4])&&(m_board.box[4]==m_board.box[6]))
        return 1;

}

void Game::update()
{
    m_isComplete= checkWin();
    bool genesis;
    if (!m_isComplete)
    {
        genesis = m_board.update(m_currPlayer->GetMove(), m_currPlayer->GetIcon());
        if (genesis)
        {
            cout << "Updating...";
            cout << "switching player..." << endl;
            switchPlayer();
        }
    }

    else
    {
        switchPlayer();
        if (m_currPlayer==&m_p1)
            cout << "Player 1 win.\n";
        else if (m_currPlayer==&m_p2)
          cout << "Player 2 win.\n";
    }
}

void Game::switchPlayer()
{
    if (m_currPlayer==&m_p1)
    {
        m_currPlayer = &m_p2;
    }

    else if (m_currPlayer==&m_p2)
    {
        m_currPlayer = &m_p1;
    }
}

