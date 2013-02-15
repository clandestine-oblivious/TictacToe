#include "Board.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
using namespace std;


Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}

void Board::initialize()
{
        int i;
        for(i=0; i<9; i++)
        {
            box[i]=i+'1';
        }


}

void Board::render()
{
        cout << endl;
        cout<< "Let's play Tic Tac Toe!" << endl << endl;
        cout<< "|" << box[0]<< "|" << box[1]<<"|" << box[2] <<"|" <<endl;
        cout<< "-------" <<endl;
        cout<< "|" << box[3] <<"|" << box[4]<<"|" << box[5] <<"|" <<endl;
        cout<< "-------" <<endl;
        cout<< "|" << box[6] <<"|" << box[7]<<"|"<< box[8] <<"|" <<endl;
        cout<< "-------" <<endl;
}

bool Board::update(int move, char icon)
{
    if (move == 1 && box[0] == '1')
    {
        box[0] = icon;
        render();
        return true;
    }

    else if (move == 2 && box[1] == '2')
    {
        box[1] = icon;
        render ();
        return true;
    }
    else if (move == 3 && box[2] == '3')
    {
        box[2] = icon;
        render ();
        return true;
    }
    else if (move == 4 && box[3] == '4')
    {
        box[3] = icon;
        render();
        return true;
    }
    else if (move == 5 && box[4] == '5')
    {
        box[4] = icon;
        render ();
        return true;
    }
    else if (move == 6 && box[5] == '6')
    {
        box[5] = icon;
        render();
        return true;
    }
    else if (move == 7 && box[6] == '7')
    {
        box[6] = icon;
        render();
        return true;
    }
    else if (move ==8 && box[7] == '8')
    {
        box[7] = icon;
        render();
        return true;
    }
    else if (move == 9 && box[8] == '9')
    {
        box[8] = icon;
        render();
        return true;
    }
    else
    {
        cout<<"I cannot comprehend whatchasayyy.."<<endl;
        return false;
    }

}
