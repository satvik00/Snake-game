#ifndef FOOD_H
#define FOOD_H
#include<windows.h>
#include<cstdlib>
#include<vector>
using std::vector;
class food
{
	private:
		COORD pos;
	public:
		void gen_food(vector<COORD> body);
		COORD get_pos();
};

#endif
