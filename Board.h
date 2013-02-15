#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        Board();
        virtual ~Board();
        void initialize();
        void render();
        void m_board();
        bool update(int, char);
        char box[9];


    protected:
    private:

};

#endif // BOARD_H
