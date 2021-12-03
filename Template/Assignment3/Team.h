#ifndef TEAM_H
#define TEAM_H

#include "DefaultHeaderFiles.h"
#include <sstream>

class Team
{
protected:
	//playground
	StadiumBuilder* builder;
	
	string name;
public:
	vector<Player*> playerList;
	Team(string n)
	{	
		name = n;
		for(int i=0;i<2;i++)
		{	
			int randNum = rand()%100;
			stringstream ss;
			ss << randNum;
			Player* newPlayer = new Attacker(ss.str());
			newPlayer->setTeamName(this->name);
			playerList.push_back(newPlayer);
		}
		for(int i=0;i<4;i++)
		{
			int randNum = rand()%100;
			stringstream ss;
			ss << randNum;
			Player* newPlayer = new MidFielder(ss.str());
			newPlayer->setTeamName(this->name);
			playerList.push_back(newPlayer);
		}
		for(int i=0;i<3;i++)
		{
			int randNum = rand()%100;
			stringstream ss;
			ss << randNum;
			Player* newPlayer = new Defender(ss.str());
			newPlayer->setTeamName(this->name);
			playerList.push_back(newPlayer);
		}
		int randNum = rand()%100;
		stringstream ss;
		ss << randNum;
		Player* newPlayer = new GoalKeeper(ss.str());
		newPlayer->setTeamName(this->name);
		playerList.push_back(newPlayer);	
	}
	void SetField(StadiumBuilder* b)
	{
		this->builder = b;
	}
	
	void ResetField()
	{
		for(int i=0;i<playerList.size();i++)
		{	
			if(playerList[i]->getFieldPositionX() != 0 && playerList[i]->getFieldPositionY() != 0)
			{
				builder->setField(playerList[i]->getFieldPositionX(),playerList[i]->getFieldPositionY(),' ');
			}			
		}
	}
	
	void RandomizeFieldPosition()
	{		
		bool isExit = true;
		ResetField();
		do
		{
			isExit = true;
			for(int i=0;i<playerList.size();i++)
			{	
				if(playerList[i]->getRole() == 'G')
				{	
					if(this->name == "Team 1")
					{	
						playerList[i]->setFieldPosition(1,(rand()%(builder->getCol()-17))+9);
					}
					else
					{
						playerList[i]->setFieldPosition((builder->getRow())-2,(rand()%(builder->getCol()-17))+9);
					}
				}
				if(playerList[i]->getRole() == 'D')
				{
					if(this->name == "Team 1")
					{
						playerList[i]->setFieldPosition(2,(rand()%(builder->getCol()-10))+5);
					}
					else
					{
						playerList[i]->setFieldPosition((builder->getRow())-3,(rand()%(builder->getCol()-10))+5);
					}
				}
				if(playerList[i]->getRole() == 'M')
				{	
					if(this->name == "Team 1")
					{	
						playerList[i]->setFieldPosition(3,(rand()%(builder->getCol()-10))+5);
					}
					else
					{
						playerList[i]->setFieldPosition((builder->getRow())-4,(rand()%(builder->getCol()-10))+5);
					}
				}
				if(playerList[i]->getRole() == 'F')
				{	
					if(this->name == "Team 1")
					{	
						playerList[i]->setFieldPosition(4,(rand()%(builder->getCol()-10))+5);
					}
					else
					{
						playerList[i]->setFieldPosition((builder->getRow())-5,(rand()%(builder->getCol()-10))+5);
					}
				}
			}
			
			for(int i=0;i<playerList.size();i++)
			{	
				for(int j=0;j<playerList.size();j++)
				{
					if(i!=j)
					{
						if(playerList[i]->getFieldPositionX() == playerList[j]->getFieldPositionX() && playerList[i]->getFieldPositionY() == playerList[j]->getFieldPositionY())
						{
							isExit = false;
							break;
						}
					}
				}
			}
		}while(isExit == true);
		
		for(int i=0;i<playerList.size();i++)
		{	
			builder->setField(playerList[i]->getFieldPositionX(),playerList[i]->getFieldPositionY(),playerList[i]->getPosition());
		}
	}
	string getName()
	{
		return name;
	}
};

#endif
