#include<iostream>
#include "Point.h"
#include "Vector.h"
using namespace std;

int main()
{
	Point t1(1, 1);
	Point t2(1,0);
	if (t1 > t2)
	{
		cout << "true" << endl;

	}
	else
	{
		cout << "false" << endl;
	}
	
	
	return 0;
}