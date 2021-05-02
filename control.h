#pragma once

#include "block.h"
#include "board.h"

enum class movement{
	up = 0,
	down = 1,
	left = 2,
	right = 3
};

class controller{

	board model;
	Block* current = nullptr;
	void display();
	void processInput(movement m);
public:
	controller(board m) : model(m) {};
	void play();

};
