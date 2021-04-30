#include <iostream>
#include <vector>

#include "block.h"
#include "board.h"

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

int main()
{	
	play();
}
