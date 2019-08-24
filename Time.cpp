# include "Time.h"
# include <iostream>
using namespace std;
Time :: Time()
{
	hr=0;
	min =0;
}

Time :: Time(int a, int b)
{
	hr=a;
	min=b;
}

void Time :: setTime(int c, int d)
{
	hr =c ;
	min = d;
}

void Time :: getTime(int&c , int &d)
{
	c =hr;
	d= min;
}

void Time :: printTime()
{
	cout << "Hours: " << hr << endl;
	cout << "MInutes: " << min << endl;
}

void Time :: incrementHours()
{
	hr++;
}

void Time :: incrementMinutes()
{
	min++;
}
