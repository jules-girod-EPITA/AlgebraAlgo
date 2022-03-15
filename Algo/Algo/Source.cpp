#include <iostream>
using namespace std;



int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	if (b == 0)
	{
		throw exception("Division with 0 is impossible");
	}
	return a / b;
}

float root(int a)
{
	if (a < 0)
	{
		throw exception("Root with <0 is impossible");
	}
	return sqrt(a);
}

int main()
{
	cout << "insert a:";
	int a;
	cin >> a;
	
	cout << "insert b:";
	int b;
	cin >> b;


	cout << a << " * " << b << " = " << multiplication(a,b) << endl;
	try
	{
		cout << a << " / " << b << " = " << division(a, b) << endl;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}


	try
	{
		cout << "root( " << a << ") = " << root(a) << endl;

	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	
	return 0;
}

