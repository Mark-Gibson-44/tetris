#include <iostream>
#include <vector>
#include "block.h"
#include "board.h"

void play()
{
	board b(10,10);
	L l(9);
	b.addBlock(l);
	while(true)
	{
		b.printBoard();
		b.drop();
		usleep(100000);
		system("clear");
	}
}

int main()
{	
	play();
}
