#ifndef ATTACK_DECORATOR_H
#define ATTACK_DECORATOR_H

#include "DefaultHeaderFiles.h"

class AttackDecorator : public PlayerDecorator
{
public:
	void setRole(Player* player)
	{
		player->setRole('A');
	}
};

#endif
