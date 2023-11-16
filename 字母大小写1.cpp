#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸" << endl;
	cin >> a;
	if (int(a) > 96)
	{
		char c;
		c = int(a) - 32;
		cout << c << endl;
	}
	else cout << int(a) << endl;
	
		

	return 0;
}