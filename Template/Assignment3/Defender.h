#ifndef DEFENDER_H
#define DEFENDER_H

#include "DefaultHeaderFiles.h"

class Defender : public Player
{
public:
	Defender(string n)
	{
		name = n;
		position = 68;
		role = 68;
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
		cout<<"Player "<<getName()<<"-> Defender of "<<this->teamName<<" try to Defend "<<endl;
	}	
	void setTeamName(string n)
	{
		this->teamName = n;
	}
};

#endif
