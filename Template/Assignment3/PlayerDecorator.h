#ifndef PLAYER_DECORATOR_H
#define PLAYER_DECORATOR_H

#include "DefaultHeaderFiles.h"

class PlayerDecorator
{	
public:
	virtual void setRole(Player* player)=0;
};

#endif
