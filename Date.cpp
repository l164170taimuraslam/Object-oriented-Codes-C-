# include "Date.h"
# include <iostream>
using namespace std;
Date :: Date()
{
	month=0;
	day=0;
	year=0;
}

Date :: Date(int a, int b, int c)
{
	month=a;
	day=b;
	year=c;
}

void Date :: setDate(int d, int e, int f)
{
	month=d;
	day=e;
	year=f;
}
 
void Date :: getDate(int &d, int &e, int &f)
{
	d= month;
	e=day;
	f=year;
}

void Date :: printDate()
{
	cout << "Month: " << month << endl;
	cout << "Day: " << day << endl;
	cout << "Year: " << year << endl;
}