#include<iostream>
using namespace std;
int main()
{
	int a, b,k=0,z,t;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	if (b > a)
	{
		k = a;
		a = b;
		b = k;
	}

	for (z = b; z > 0; z--)

	{
		if (a % z == 0 && b % z == 0)
		{
			cout << z << "为最大公约数" << endl;

			break; 
		}
			
	}
	t = (a * b) / z;
	cout << t << "为最大公倍数" << endl;

	return 0;

	


}