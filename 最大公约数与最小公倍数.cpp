#include<iostream>
using namespace std;
int main()
{
	int a, b,k=0,z,t;
	cout << "����������������" << endl;
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
			cout << z << "Ϊ���Լ��" << endl;

			break; 
		}
			
	}
	t = (a * b) / z;
	cout << t << "Ϊ��󹫱���" << endl;

	return 0;

	


}