#ifndef BALL_H
#define BALL_H

#include "DefaultHeaderFiles.h"
#include "StadiumBuilder.h"

class Ball : public Subject
{
public:
	int xPos;
	int yPos;
	char symbol;
	void InitializePosition(StadiumBuilder* builder)
	{
		symbol = 66;
		xPos = rand()%2+(builder->getRow()/2)-1;
		yPos = (builder->getCol())/2;		
		builder->setField(xPos,yPos,symbol);
	}
	void ChangePosition(StadiumBuilder* builder)
	{	
		int x;
		int y;
		bool isExit = false;
		do
		{	
			x = (rand()%(builder->getRow()-2))+1;
			y = (rand()%(builder->getCol()-10))+5;			
			if(builder->getField(x,y) == ' ')
			{	
				isExit = true;
				builder->setField(xPos,yPos,' ');
				this->xPos = x;
				this->yPos = y;	
				builder->setField(xPos,yPos,symbol);
			}
		}while(!isExit);
	}
	int getXpos()
	{
		return xPos;
	}
	int getYpos()
	{
		return yPos;
	}
};

#endif
