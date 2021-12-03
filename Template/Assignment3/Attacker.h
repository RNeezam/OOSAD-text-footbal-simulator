#ifndef FORWARD_H
#define FORWARD_H

#include "DefaultHeaderFiles.h"

class Attacker : public Player
{
public:
	Forward(string n)
	{
		name = n;
		position = 70;
		role = 70;
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
		cout<<"Player "<<getName()<<"-> Attacker of "<<this->teamName<<" try to attack "<<endl;
	}
	void setTeamName(string n)
	{
		this->teamName = n;
	}
};

#endif
