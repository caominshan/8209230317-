#include<iostream>
using namespace std;
float BDS(float x)
{
	float y;
	if (x <= 0)
		cout << "�������ڶ������ڵ�ֵ" << endl;
	else if(0 < x&& x< 1)
		y = 3 - (2 * x);
	else if (x < 5)
		y = 2 / (4 * x) + 1;
	else if (x < 10)
		y = x * x;
	else cout << "�������ڶ������ڵ�ֵ" << endl;
	
	return y;
}
int main()
{
	float a;
	cout << "������һ��������" << endl;
	cin >> a;
	cout << "���Ϊ" << BDS(a) << endl;
}
