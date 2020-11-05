#ifndef SNAKE_H
#define SNAKE_H
#include<windows.h>
#include<vector>
using std::vector;
class Snake{
    private:
        COORD pos;
        int length;
        int vel;
        char direction;
        vector<COORD> body;
    public:
        Snake(COORD pos, int vel);
        void change_dir(char dir);
        void move_snake();
        char get_dir();
        vector<COORD> get_body();
        COORD get_pos();
        bool ate(COORD food_pos);
        void grow();
        bool collide();
};

#endif
