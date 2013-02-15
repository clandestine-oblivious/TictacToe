#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H



class Player
{
    public:
        Player();
        virtual ~Player();
        void SetName(string n);
        void SetIcon (char i);
        string GetName ();
        char GetIcon ();
        int GetMove();

    protected:
    private:
        string name;
        char icon;
};

#endif // PLAYER_H
