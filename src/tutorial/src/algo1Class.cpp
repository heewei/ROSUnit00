#include "algo1Class.h"

algo1Class::myType algo1Class::AddTogether(myType a, myType b)
{
	myType temp;
	temp.x = a.x + b.x;
	temp.y = a.y + b.y;
	temp.tickStamp = a.tickStamp;

	return temp;
}


