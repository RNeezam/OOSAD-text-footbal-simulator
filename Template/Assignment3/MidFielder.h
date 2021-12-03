#ifndef MIDFIELDER_H
#define MIDFIELDER_H

#include "DefaultHeaderFiles.h"

class MidFielder : public Player
{
public:
	Midfielder(string n)
	{
		name = n;
		position = 77;
		role = 77;
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
		if(role == 'F')
		{
			cout<<"Player "<<getName()<<"-> Midfielder of "<<this->teamName<<" try to attack "<<endl;
		}
		else if(role == 'D')
		{
			cout<<"Player "<<getName()<<"-> Midfielder of "<<this->teamName<<" try to Defend "<<endl;
		}	
	}
	void setTeamName(string n)
	{
		this->teamName = n;
	}
};

#endif
