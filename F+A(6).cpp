//passing array to the function
#include <iostream>
using namespace std;

void printArray(int[],int);
void modifyArray(int[],int);

int main()
{
	int size=8;
	int number[size]={67,89,56,43,29,15,90,67};
	
	cout << "Values of array before function call: "<< endl;
	printArray(number,size);
	modifyArray(number,size);
	
	cout << "Values of array after function call: "<< endl;
	printArray(number,size);
}

void printArray(int n[], int s)
{
	for(int i=0; i<s; i++)
	{
		cout << n[i]<< " ";
	}
	cout<<endl;
}

void modifyArray(int n[], int s)
{
	for(int i=0; i<s; i++)
	{
		if(n[i]<50)
		{
			n[i]=-1;
		}
	}
	cout << "Value of array inside the function: "<< endl;
	printArray(n,s);
}

/*Values of array before function call:
67 89 56 43 29 15 90 67
Value of array inside the function:
67 89 56 -1 -1 -1 90 67
Values of array after function call:
67 89 56 -1 -1 -1 90 67*/
