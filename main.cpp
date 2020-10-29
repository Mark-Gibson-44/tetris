#include <iostream>
#include <vector>
#include "block.h"

int main()
	{	
		std::vector<std::vector<char>> board;
		for(int i = 0;i<10;i++)
		{
			std::vector<char> temp;
			for(int j = 0;j < 10; j++)
			{
				char t = '0';
				if((i ==0 || i == 9) || (j ==0 || j ==9))
				{
					t = 'X';
				}
				temp.push_back(t);
			}
			board.push_back(temp);
		}
		L l;
		for(int z = 0; z < 4; z++)
		{
			board[l.positions[z].y][l.positions[z].x] = 'A';
		}
		for(int i = 9; i > -1; i--)
		{
			for(int j = 9; j > -1; j--)
			{
				
				std::cout << board[i][j];
			}
			std::cout << std::endl;
		}
		
	return 0;
	}	
