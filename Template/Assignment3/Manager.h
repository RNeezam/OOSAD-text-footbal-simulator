#ifndef MANAGER_H
#define MANAGER_H

#include "DefaultHeaderFiles.h"

class Manager : public Observer
{
protected:
	
	int xPos;
	string name;
public:
	Manager(string n)
	{
		name =n;
	}
	Team* team;
	void getBallPosition(int x)
	{
		xPos = x;
	}
	void setTeam(Team* t)
	{
		this->team = t;
	}
	void Update()
	{
		if(this->name == "Manager 1")
		{
			if(xPos > 5)
			{
				TeamStrategy* strategy = new AttackStrategy();
				strategy->StrategyBehavior(this->team);
				cout<<"Manager of Team 1 had changed their team strategy to Attack!"<<endl;
			}
			else if(xPos < 5)
			{
				TeamStrategy* strategy = new DefendStrategy();
				strategy->StrategyBehavior(this->team);
				cout<<"Manager of Team 1 had changed their team strategy to Defend!"<<endl;
			}
		}
		else
		{
			if(xPos > 5)
			{
				TeamStrategy* strategy = new DefendStrategy();
				strategy->StrategyBehavior(this->team);
				cout<<"Manager of Team 2 had changed their team strategy to Defend!"<<endl;
			}
			else if(xPos < 5)
			{
				TeamStrategy* strategy = new AttackStrategy();
				strategy->StrategyBehavior(this->team);
				cout<<"Manager of Team 2 had changed their team strategy to Attack!"<<endl;
			}
		}
	}
};

#endif
