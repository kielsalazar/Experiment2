#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Counting..." <<endl;
	for (number=1; number<10; number++)
	{
		cout << number << ",";
	}
	for (number=10; number>=10, number<=30; number+=2)
	{
		cout << number << ",";
	}
getch();
return 0;
}
