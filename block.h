#pragma once

struct{
	int x,
	int y
} coord;

class Block{
	
	coord positions[4];
	int center;
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
			else if(positions[i] > positions[center].x)
			{
				positions[i].x--;
			}
			
			if(positions[i].y < positions[center].y)
			{
				positions[i].y++;
			}
			else if(positions[i].y > positions[center].y
			{
				positions[i].y--;
			}	
		}
	}
}
