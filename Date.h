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
