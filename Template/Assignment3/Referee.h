#ifndef REFEREE_H
#define REFEREE_H

#include "DefaultHeaderFiles.h"

class Referee : public Observer
{
protected:
	StadiumBuilder* builder;
	Ball* ball;
public:
	Referee(StadiumBuilder* b,Ball* ball)
	{
		this->builder = b;
		this->ball = ball;
	}
	void Update()
	{
		if(this->ball->getXpos() > 0 && this->ball->getXpos()<this->builder->getRow()-1 && ball->getYpos() > 5 && this->ball->getYpos() < this->builder->getCol() - 5)
		{
			cout<<"Referee: The ball is in the field!"<<endl;
		}
		else
		{
			cout<<"Referee: The ball is out!"<<endl;
		}
	}
};

#endif
