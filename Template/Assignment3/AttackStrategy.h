#ifndef ATTACK_STRATEGY_H
#define ATTACK_STARTEGY_H

#include "DefaultHeaderFiles.h"

class AttackStrategy : public TeamStrategy
{
public:
	void StrategyBehavior(Team* team)
	{
		for(int i=0;i<team->playerList.size();i++)
		{
			if(team->playerList[i]->position == 'M')
			{
				
				PlayerDecorator* roleD = new AttackDecorator();
				roleD->setRole(team->playerList[i]);
				team->RandomizeFieldPosition();
			}
		}
	}
};

#endif
