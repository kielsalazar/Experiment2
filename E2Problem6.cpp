#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
	int number, sum, i1; 
	cout << "Please input a number: "; cin >> number;
	
	while (number>0)
	{
		sum=0;
	for (i1=1; i1<=number; i1++)
	{
		sum+=i1;
	}
		cout << "The sum of all the whole numbers from 1 to " << number << " is " << sum << "." <<endl;
		cout << "Please input another number: "; cin >> number;
	}
	cout << "Thank you!";

getch();
return 0;
}
