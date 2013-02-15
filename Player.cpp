#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void Player::SetName (string n)
{
    name = n;
}

void Player::SetIcon (char i)
{
    icon = i;
}

string Player::GetName ()
{
    return name;
}

char Player::GetIcon ()
{
    return icon;
}

int Player::GetMove()
{
    int move;
    cout << "Enter move: ";
    cin >> move;
    return move;
}

