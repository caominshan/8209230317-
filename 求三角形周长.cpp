#include<iostream>
using namespace std;
int main()
{
	int a, b, c,l;
	cout << "�����������ε�������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)

	{
		l = a + b + c;
		cout << "���������ܳ�Ϊ" << l << endl;
	}
	else 
		cout << "�����߲������������" << endl;

	if (a==b || b == c || a == c)
		cout << "��������Ϊ����������" << endl;

	return 0;
}