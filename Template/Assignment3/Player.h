#ifndef PLAYER_H
#define PLAYER_H

#include "DefaultHeaderFiles.h"

using namespace std;

class Player : public Observer
{	
private:	
	int xPos;
	int yPos;
public:
	string name;
	char role;
	string teamName;
	char position;
	virtual string getName()=0;
	virtual char getPosition()=0;
	virtual void setTeamName(string n)=0;
	virtual char getRole()=0;
	
	void setRole(char r)
	{
		role = r;
	}	

	void setFieldPosition(int x,int y)
	{
		xPos = x;
		yPos = y;
	}
	int getFieldPositionX()
	{
		return xPos;
	}
	int getFieldPositionY()
	{
		return yPos;
	}
};

#endif

