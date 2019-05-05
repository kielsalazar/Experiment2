#include <conio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int X, Y, V;
	const int Z = 2.5;
	
	cout << "Please input the value of X: "; cin >> X; 
	cout << "Please input the value of Y: "; cin >> Y;
	
	switch(X)
	{
		case 1:
			if (1<Y<5)
			{
				V=X*Y*Z;
			}
			else if (Y>=5)
			{
				V=X+(Y/Z);
			}
			break;
		case 2:
			if (Y<=5)
			{
				V=fabs((X-Y)/Z);
			}
			else if (Y>5)
			{
				V=X-(sqrt(Y+Z));
			}
			break;
		default:
			V=X+Y+Z;
			break;
	}
	cout << fixed << setprecision(2);
	cout << "The value of V is: " << setw(10) << V;

getch();
return 0;
}
