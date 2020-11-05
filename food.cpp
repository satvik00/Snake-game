#include "food.h"
#include<unistd.h>
#include<ctime>
#define width 40
#define height 20
using std::vector;

void food::gen_food(vector<COORD> body){
	
	bool correct=false;
	do{	
		pos.X=rand() % 38 +1;
		pos.Y=rand() % 18 +1;
		for(int i=0;i<body.size()-1;i++){
			srand(time(0));
			if(body[i].X==pos.X && body[i].Y==pos.Y)
				correct=true;
		}	
	}while(correct);
}

COORD food::get_pos(){ 
	return pos;
}
