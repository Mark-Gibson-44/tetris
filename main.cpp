#include <iostream>
#include <vector>

#include "control.h"
/*
void play()
{
	board b(10,10);
	L l(9);
	b.addBlock(l);
	char move;
	while(true)
	{
		b.printBoard();
		move = std::cin.get();
		
		usleep(1000000);
		system("clear");
	}
}
*/
int main()
{	
	controller a(board(10,20));
	a.play();
}
