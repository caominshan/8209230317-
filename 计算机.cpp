#include<iostream>
using namespace std;
int main()
{
	int  a, b,c;
	
	
	cout << "�������һ������" << endl;
	cin >> a;
	cout << "���������㷽ʽ�����밴1�����밴2�����밴3�����밴4,ȡ���밴5" << endl;
	cin >> c;
	cout << "������ڶ�������" << endl;
	cin >>b;
	 
	switch ( c)
	{
	case 1:
		cout << a +b << endl;
		break;
	case 2:
		cout << a - b << endl;
		break;
	case 3:
		cout << a * b << endl;
		break;
	case 4:
		cout << a /b << endl;
		break;
	case 5:
		cout << a % b << endl;
		break;

	}
}