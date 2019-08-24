# include "Event.h"
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
