#include "DefaultHeaderFiles.h"
#include <algorithm>

using namespace std;

void Subject::Attach(Observer* observer)
{
	observerList.push_back(observer);
}

void Subject::Detach()
{
	observerList.clear();
}

void Subject::Notify()
{
	for(vector<Observer*>::const_iterator iter= observerList.begin();iter!= observerList.end(); ++iter)
	{
		if(*iter!= 0)
		{
			(*iter)->Update();
		}
	}
}


