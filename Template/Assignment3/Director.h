#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "DefaultHeaderFiles.h"

class Director
{
protected:
	StadiumBuilder* builder;
public:
	void SetBuilder(StadiumBuilder* newBuilder)
	{
		builder = newBuilder;
	}
	StadiumBuilder* GetBuilder()
	{
		return builder;
	}
	void Build()
	{
		builder->BuildStadium();
	}
	void Display()
	{
		builder->DisplayStadium();
	}
};

#endif
