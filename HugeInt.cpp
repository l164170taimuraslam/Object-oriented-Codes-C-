#include <iostream>
#include <string>
using namespace std;

// ********************************** PART 1 ****************************************
// Implement the default constructor for the following class

class HugeInt {
public:
	HugeInt();
private:
	int *data;
	int size;
};

HugeInt :: HugeInt () // default constructor for class HugeInt
{
	data = new int(0);
	size = 0;
}


// ********************************** PART 2 ****************************************
// In the class below write a pure virtual function called �Draw�.

class Shape {
public:
	Shape() {
		x = 0;
		y = 0;
	}
	virtual void Draw()=0; // Pure virtual function
private:
	int x;
	int y;
};

void Shape :: Draw() // Becasue of being pure virtual, this remains empty
{

}

int main()
{
	// ********************************** PART 3 ****************************************
	// Write the code of creating the following dynamic 2D int array with 5 rows and 10 columns
	int rows= 5;
	int cols =10;

	int **dynamic_2d_int_array = new int*[rows]; // creating dynamic 2D array
	for(int i=0;i<rows;i++)
	{
		dynamic_2d_int_array[i] = new int [cols];
	}

	// ********************************** PART 4 ****************************************
	// Write code for deleting the above array dynamic_2d_int_array
	for (int i=0;i<rows;i++)
	{
			delete[]dynamic_2d_int_array[i]; // deleting dynamic 2D array
	}
	delete[]dynamic_2d_int_array;

	// ********************************** PART 5 ****************************************
	// Write c++ code that prints int_arr

	int size = 10;
	int *int_arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		int_arr[i] = i * 2;
	}

	cout << "Integer Array is: "; 
	for(int k=0; k <size;k++)
	{
		cout << int_arr[k] << " " ;  // printing integer array
	}

	cout << endl;
	cout << "Character Array is: ";
	// Write code that prints char_arr

	char *char_arr = new char[size];
	for (int i = 0; i < size - 1; i++)
	{
		char_arr[i] = 'a';
	}
	char_arr[size - 1] = '\0';


	for(int j=0;char_arr[j]!='\0';j++)
	{
		cout << char_arr[j] << " "; // printing character array
	}
	cout << endl;

	// ********************************** PART 6 ****************************************
	// Write code to deallocate int_arr and char_arr

	delete[]int_arr;
	delete[]char_arr;

	// ********************************** PART 7 ****************************************
	// Comapare the following string arrays index wise




	string pens[4] = { "Blue", "Red", "Orange", "Yellow" };
	string markers[4] = { "Blue", "Red", "Orange", "White" };
	
	for(int i=0;i<4;i++)
	{
		if(pens[i]==markers[i]) // comparing strings
		{
			continue;
			cout << "Both strings have same things yet\n";
		}
		else
		{
			cout << "Things in both the strings are not same\n";
			break;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}