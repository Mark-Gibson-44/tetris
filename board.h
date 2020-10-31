#pragma once
#include <vector>
#include <unistd.h>
#include <iostream>
#include "block.h"

class board
{
	int height, width;
	std::vector<std::vector<char>> play;
	std::vector<Block> pieces;
	void fillBoard()
	{
		play.clear();
		for(int i = height - 1; i > -1; i--)
		{
			std::vector<char> temp;
			for(int j = 0; j < width; j++)
			{
				if(blockHere(j,i))
				{
					temp.push_back('I');
					continue;
				}
				if((i == 0 || i == height-1) || (j == 0) || (j == width -1))
				{
					temp.push_back('X');
				}
				else
				{
					temp.push_back(' ');
				}
				

			}
			play.push_back(temp);
			
		}
	}


	public:

	board(int h, int w){
		height = h;
		width = w;
		fillBoard();
	}
	void addBlock(Block b)
	{
		pieces.push_back(b);
	}
	bool blockHere(int x, int y)
	{
		for(auto a: pieces)
		{
			for(auto q: a.positions)
			{
				if(q.x == x && q.y == y)
					return true;
			}
		}
		return false;
	}
	void printBoard()
	{
		fillBoard();
		for(auto i : play)
		{
			for(auto j: i)
			{
				std::cout << j;
			}
			std::cout << std::endl;
		}

	}
	void drop()
	{
		for(auto a : pieces)
			a.descend();
	}
};
