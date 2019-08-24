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