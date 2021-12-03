#ifndef TEAM_STRATEGY_H
#define TEAM_STRATEGY_H

#include "DefaultHeaderFiles.h"

class TeamStrategy
{
public:
	virtual void StrategyBehavior(Team* team)=0;
};

#endif
