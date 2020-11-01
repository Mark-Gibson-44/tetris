#pragma once
#include <iostream>
typedef struct{
	int x;
	int y;
} coord;

class Block{
	public:
	
	coord positions[4];
	int center;
	int height;//point to init object
	Block(int h)
	{
		height = h;

	}
	void rotateR()
	{
		for(int  i = 0; i < 4; i++)
		{
			if(i == center)
				continue;
			if(positions[i].x < positions[center].x)
			{
				positions[i].x++;
			}
			else if(positions[i].x > positions[center].x)
			{
				positions[i].x--;
			}
			
			if(positions[i].y < positions[center].y)
			{
				positions[i].y++;
			}
			else if(positions[i].y > positions[center].y)
			{
				positions[i].y--;
			}	
		}
	}
	bool bottom()
	{
		for(int i = 0; i < 4; i++)
		{
			if(positions[i].y == 0)
				return true;
		}
		return false;
	}
	void descend()
	{
		if(bottom())
			return;	
		for(int i = 0; i < 4; i++)
		{
			
			this->positions[i].y = positions[i].y - 1;
			
		}	
	}
};
class L : public Block
{
	public:
	L(int h): Block(h){
		
		positions[0].x = 0;
		positions[0].y = height;
		positions[1].x = 0;
		positions[1].y = height - 1;
		positions[2].x = 0;
		positions[2].y = height - 2;
		positions[3].x = 0;
		positions[3].y = height - 3;
		center = 1;
		}
	

};
class S : public Block
{
	public:
		S(int h): Block(h){
			
			positions[0].x = 0;
			positions[0].y = height;
			positions[1].x = 1;
			positions[1].y = height;
			positions[2].x = 1;
			positions[2].y = height -1;
			positions[3].x = 2;
			positions[3].y = height - 1;
		}
};

