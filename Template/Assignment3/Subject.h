#ifndef SUBJECT_H
#define SUBJECT_H

#include "DefaultHeaderFiles.h"

class Subject
{
private:
	vector<Observer*> observerList;
public:
	void Attach(Observer* observer);
	void Detach();
	void Notify();
};

#endif
