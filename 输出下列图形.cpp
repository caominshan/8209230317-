#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i < 6; i++)
	{
		if (i == 1)
		{
			cout << '*' << endl;

		}
		if (i == 2)
		{
			cout << "** " << endl;
		}
		if (i == 3)
		{
			cout << "*** " << endl;
		}
		if (i == 4)
		{
			cout << "****" << endl;
		}
		if (i == 5)
		{
			cout << "*****" << endl;
		}
	}

}