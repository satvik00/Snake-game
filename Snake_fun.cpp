#include "Snake.h"
#define width 40
#define height 20
using std::vector;

Snake::Snake(COORD pos, int vel){
    this->pos=pos;
    this->vel=vel;
    length=1;
    body.push_back(pos);
    direction='n';
}

void Snake::change_dir(char dir){ direction=dir;}

void Snake::move_snake(){
    switch(direction){
        case 'u': pos.Y-=vel;
                break;
        case 'd': pos.Y+=vel;
                break;
        case 'r': pos.X+=vel;
                break;
        case 'l': pos.X-=vel;
                break;
    }
    body.push_back(pos);
    if(body.size()>length){
    	body.erase(body.begin());
	}
}
char Snake::get_dir(){
	return direction;
}

vector<COORD> Snake::get_body(){ 
	return body;
}

COORD Snake::get_pos(){return pos;}

bool Snake::ate(COORD food_pos){
	if(food_pos.X==pos.X && food_pos.Y==pos.Y){
		return true;
	}
	return false;
}

void Snake::grow(){
	length++;
}

bool Snake::collide(){
	if(pos.X < 1 || pos.X  > width || pos.Y < 1 || pos.Y > height) return true;
	for(int i=0;i<length-1;i++){
		if(pos.X==body[i].X && pos.Y==body[i].Y)
			return true;
	}
	return false;
}


