//function
#include <iostream>
#include <cmath>
using namespace std;

int sum(int, int);

int main()
{
	int x,y;
	cout << "Enter the first number: ";
	cin>> x;
	
	cout<< "Enter the second number: ";
	cin>> y;
	
	cout << "Sum of these two: "<<sum(x,y);
	
	return 0;
}

int sum(int a, int b)
{
	return a+b;
}

