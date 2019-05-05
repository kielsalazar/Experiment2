#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	char package;
	int hr, amount;
	bool invalid = false;
	do
	{
		cout << "Package A: For P995/mo 10 hrs of access are provided. \n" ;
		cout << "Additional hours are P20/hr. \n" ;
		cout << "Package B: For P1495/mo 20 hrs of access are provided. \n" ;
		cout << "Additional hours are P10/hr. \n" ; 
		cout << "Package C: For P1995/mo of unlimited access is provided. \n" ;
		cout << "Thank you for choosing Salazarlink. \n" ;
		cout << "Please input the package subscribed: "; cin >> package; 
		cout << "Please input how many hours have been consumed: "; cin >> hr;
		
		if ((package!= 'A' && package!= 'a' && package!= 'B' && package!= 'b' && package!= 'C' && package!= 'c') || hr < 0)
		{
			cout << "Error, Wrong Input! \n";
			break;
			
		}
		else 
		{
			switch(package)
			{
				case 'A':
				case 'a':
					if (hr<10)
					amount = 995;
					else 
					amount = 995 + (hr-10)*20; //for additional hours consumed
					break;
				case 'B':
				case 'b':
					if (hr<20)
					amount = 1495;
					else 
					amount = 1495 + (hr-20)*10; //for additional hours consumed
					break;
				case 'C':
				case 'c':
					amount = 1995;
					break;
					
			}
			cout << "Total amount: " << amount << "\n\n" << endl;
		}
	} while (!invalid);
getch();
return 0;
}
