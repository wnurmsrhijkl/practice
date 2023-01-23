//2D array
//Print
#include <iostream>
using namespace std;

int main()
{
	int test[3][3]={0};
	test[0][0]=5;
	test[0][1]=10;
	test[1][1]=15;
	test[1][2]=20;
	test[2][0]=30;
	test[2][2]=10;

    for (int row=0; row <3; ++row)
    {
    	for(int col=0; col<3; ++col)
    	{
    		cout << test[row][col]<< " ";
		}
		cout << "\n";
	}
	return 0;
}

/*5 10 0
0 15 20
30 0 10*/
