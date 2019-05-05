#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int charge, latecharge;
	charge = 35;
	latecharge = 20;
	
	float gallons, prevBal, bill, rate;
	rate = 1.10;
	
	cout << "Salazarski Water Bill Service \n";
	cout << "Please input the number of gallons used: \n"; cin >> gallons;
	cout << "Please input your previous month balance: \n"; cin >> prevBal;
	
	bill = (charge+(gallons*rate));
	if (prevBal>0)
	{
		cout << "Your water bill for this month is: Php" << (bill + latecharge + prevBal) << endl;
	}
	else
	{
		cout << "Your water bill for this month is: Php" << bill << endl;
	}
		cout << "Thank you for using our water service \n";
		
getch();
return 0;
}
