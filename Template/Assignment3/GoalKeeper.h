#ifndef GOALKEEPER_H
#define GOALKEEPER_H

#include "DefaultHeaderFiles.h"

class GoalKeeper : public Player
{
public:
	GoalKeeper(string n)
	{
		name = n;
		position = 71;
		role = 71;
		setFieldPosition(0,0);
	}
	char getRole()
	{
		return role;
	}
	string getName()
	{
		return name;
	}
	char getPosition()
	{
		return position;
	}	
	void Update()
	{
		cout<<"Player "<<getName()<<"-> Goalkeeper of "<<this->teamName<<" try to catch the ball "<<endl;
	}	
	void setTeamName(string n)
	{
		this->teamName = n;
	}
};

#endif
