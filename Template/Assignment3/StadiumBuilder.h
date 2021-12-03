#ifndef STADIUM_BUILDER_H
#define STADIUM_BUILDER_H

#include "DefaultHeaderFiles.h"

class StadiumBuilder
{	
public:
	virtual void BuildStadium()=0;
	virtual void DisplayStadium()=0;
	virtual char getField(int x,int y)=0;
	virtual void setField(int x,int y,char p)=0;
	virtual int getCol()=0;
	virtual int getRow()=0;
};

#endif
