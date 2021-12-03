#ifndef DEFEND_DECORATOR_H
#define DEFEND_DECORATOR_H

#include "DefaultHeaderFiles.h"

class DefendDecorator : public PlayerDecorator
{
public:
	void setRole(Player* player)
	{
		player->setRole('D');
	}
};

#endif
