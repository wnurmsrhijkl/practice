#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double,double,double);

int main()
{
	double l=getLength();
	double w=getWidth();
	double r=getArea(l,w);
    displayData(l,w,r);
    
    return 0;
}

double getLength()
{
	double length;
	cout<<"Enter length of the rectangle: ";
	cin >> length;
	return length;
}

double getWidth()
{
	double width;
    cout<<"Enter width of the rectangle: ";
	cin >> width;	
	return width;
}

double getArea(double length, double width)
{
	double a;
	a=length*width;
	return a;	
}

void displayData(double length, double width, double a)
{
	cout << "\nThe rectangle length is: "<<length<<endl;
	cout << "The rectangle width is: "<<width<< endl;
	cout << "The area of the rectangle is: "<<a<< endl;
}

/*Enter length of the rectangle: 10
Enter width of the rectangle: 10

The rectangle length is: 10
The rectangle width is: 10
The area of the rectangle is: 100*/





