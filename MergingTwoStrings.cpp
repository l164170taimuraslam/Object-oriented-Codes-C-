# include <iostream>
using namespace std;
void myCopy(char s1[], char s2[], int index = 0)
{
    if (s1[index]=='\0')   // if string reach to end then stop  
    {
		return ;
	}
	else
	{
		s2[index] = s1[index];  // copying each character from s1 to s2 
	}
    myCopy(s1, s2, index+1); // increase character index by one  as we are calling the function again.
}
int main() 
{ 
    char s1[100] = "Hello world !!"; 
    char s2[100] = ""; 
    myCopy(s1, s2); 
    cout << s2; 
	system("pause");
    return 0; 
} 