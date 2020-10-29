#pragma once

typedef struct{
	int x;
	int y;
} coord;

class Block{
	public:
	
	coord positions[4];
	int center;
	Block()
	{

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
};
class L : public Block
{
	public:
	L(){
		positions[0].x = 0;
		positions[0].y = 0;
		positions[1].x = 0;
		positions[1].y = 1;
		positions[2].x = 0;
		positions[2].y = 2;
		positions[3].x = 0;
		positions[3].y = 3;
		center = 1;
		}

};
