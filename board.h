#pragma once
#include <vector>
#include <unistd.h>
#include <iostream>


class board
{
	const int height, width;
	std::vector<std::vector<int>> model;
	
	
	void fillBoard()
	{
		
		for(int i = 0; i < height; i++)
		{
			std::vector<int> temp;
			for(int j = 0; j < width; j++)
			{
				/*if(blockAt(j,i))
				{
					temp.push_back(true);
					continue;
					
				}*/
				if((i == 0 || i == height-1) || (j == 0) || (j == width -1))
				{
					temp.emplace_back(1);
				}
				else
				{
					temp.emplace_back(0);
				}
				

			}
			model.push_back(temp);
			
		}
	}
	void updatePoint(int x, int y){
		model[x][y] = 1;
	}
		
	public:

	board(int h, int w): height(h), width(w){
		fillBoard();
	}
	bool blockBelow(int x, int y)
	{
		return blockAt(x,y-1);
	}
	
	
	/*void drop()
	{
		
		for(int i = 0; i < pieces.size(); i++)
		{
			for(int j = 0; j < 4; j++)
			{
				if(!blockBelow(pieces[i].positions[j].x,pieces[i].positions[j].y))
					pieces[i].descend();
			}
		}
	}*/
	bool blockAt(int x, int y){
                return model[x][y];
        }

	bool checkRow(int r)
	 
	{
		int col;
		for(int i = 0; i < width; i++)
		{
			if(blockAt(r,i))
				col++;
		}
		return(col == width - 1);
	}
	void clearRow(int r){
		for(int i = r; i < height - 1; i++){
			for(int j = 0; j < width; j++){
				model[i][j] = model[i+1][j];
			}
		}
	}
	const int& getHeight(){
		return height;
	}
	const int& getWidth(){
		return width;
	}	
};
