#ifndef DEFEND_STRATEGY_H
#define DEFEND_STRATEGY_H

#include "DefaultHeaderFiles.h"

class DefendStrategy : public TeamStrategy
{
public:
	void StrategyBehavior(Team* team)
	{	
		for(int i=0;i<team->playerList.size();i++)
		{
			if(team->playerList[i]->position == 'M')
			{
				
				PlayerDecorator* roleD = new DefendDecorator();
				roleD->setRole(team->playerList[i]);
				team->RandomizeFieldPosition();
			}
		}
	}
};

#endif
