#include<iostream>
using namespace std;
int main()
{
	int  a, b,c;
	
	
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "请输入运算方式，加请按1，减请按2，乘请按3，除请按4,取余请按5" << endl;
	cin >> c;
	cout << "请输入第二个数字" << endl;
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