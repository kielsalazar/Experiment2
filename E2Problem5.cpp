#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int num, fvalue, svalue, tvalue;
	fvalue = 0;
	svalue = 1;
	
	cout << "Fibonacci numbers: " << endl;
	
	for (int num=0; num<22; num++)
	{
		if (num<=1)
		tvalue = num;
		else
			{
			tvalue = fvalue + svalue;
			fvalue = svalue;
			svalue = tvalue; 
			}
		cout << tvalue << ",";
	}
getch();
return 0;	
}
