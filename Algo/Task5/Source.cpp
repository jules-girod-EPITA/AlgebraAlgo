#include <iostream>
#include <array>
#include <algorithm>
using namespace std;



void init_array(array<int,100> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = i+1;
	}
}


bool prime(int &a)
{
	for (int i = 2; i <= a /2; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return a != 1;
}


void print_if_prime(int &n)
{
	if (prime(n))
	{
		cout << n << endl;
	}
}

int main()
{
	array<int ,100> arr;

	init_array(arr);
	
	for_each(arr.rbegin(),arr.rend(),print_if_prime);

	

	return 0;
}