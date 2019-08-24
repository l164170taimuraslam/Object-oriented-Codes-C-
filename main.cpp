#include<iostream>
#include<string>
 
using namespace std;
 
class Time
{     //Time class
public:
      Time();
      Time(int, int);
      void setTime(int, int);
      void getTime(int&, int&);
      void printTime();
      void incrementHours();
      void incrementMinutes();
 
private:
      int hr;
      int min;
 
};
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
 
class Date
{//Date class
public:
      Date();
      Date(int, int, int);
      void setDate(int, int, int);
      void getDate(int&, int&, int&);
      void printDate();
 
private:
      int month;
      int day;
      int year;
 
};

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
class Event
{//Event class
public:
      Event(int hours = 0, int minutes = 0, int m = 1,
            int d = 1, int y = 1900, string name = "Christmas"); 
      void setEventData(int hours, int minutes, int m, int d, int y, string name);
      void printEventData();
 
private:
      string eventName;
      Time eventTime;
      Date eventDay;
 
};
Event ::  Event(int hours = 0, int minutes = 0, int m = 1, int d = 1, int y = 1900, string name = "Christmas")
{

}
void Event :: setEventData(int hours, int minutes, int m, int d, int y, string name)
{
   eventName = name;   
}
void Event :: printEventData()
{
    cout << "Event Name: " << eventName << endl;
}

 
int main()
{//instantiate an object and set data for Christmas
      Event object;
      object.setEventData(6, 0, 12, 25, 2010, "Christmas");
      //print out the data for object
      object.printEventData();
      //instantiate the second object and set date for the fourth of July
      Event object2;
      object2.setEventData(1, 15, 7, 4, 2010, "Fourth of July");
      //print out the data for the second object
      object2.printEventData();
 
      return 0;
}