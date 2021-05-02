#include "control.h"
#include "block.h"
#include <iostream>

void controller::display(){
	for(int i = model.getHeight() - 1; i >= 0; i--)
	{
		for(int j = 0; j < model.getWidth(); j++)
		{
			std::cout << (model.blockAt(i,j)) ? 'I' : ' ';
		}
		std::cout << std::endl;
	}
}


Block* genBlock(){
	int random = 1;
	switch(random){
		case 0:
			//Block ret =  new S(2);
			return new S(2);
			
		case 1:
			//Block ret = new L(3);
			return  new L(2);
	}
};


void controller::play(){
	char move;
	while(true)
	{
		current = genBlock();
		display();
		std::cin >> move;
		//processInput((move == 'A')? movement::left : movement::right);
		
	}
}



