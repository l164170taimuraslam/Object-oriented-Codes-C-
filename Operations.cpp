# include <iostream>
using namespace std;
template<class obj>
void performOperation(obj a, obj b, char op) // function prototype
{
	switch(op) //switch for opewration
	{
	case'*': // multiplication case
		{
		  cout << "Multiplication: " << a*b << endl;
		  break;
		}
	case'+': // addition case
		{
		  cout << "Addition: " << a+b << endl;
		  break;
		}
	case'-': // subtraction case
		{
		  cout << "Subtraction: " << a-b << endl;
		  break;
		}
	case'/': // division case
     	{
		  cout << "Division: " << a/b << endl;
		  break;
	    }
	}
}
void main()
{
	float a, b; // this can be float, int or double too
	char op;
	cout << "Enter first integer: ";
	cin >> a;
	cout << "Enter second integer: ";
	cin >> b;
	cout << "Enter operation: ";
	cin >> op; // op can be +, -, * or /
	if (op == '*' || op == '+' || op == '-' || op == '/')
	{
		performOperation(a, b, op);
	}
	else
	{
		cout << "Wrong operation";
	}
	system("pause");
}