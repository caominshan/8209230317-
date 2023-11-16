#include<iostream>
using namespace std;
int main()
{
	int a, b, c,l;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)

	{
		l = a + b + c;
		cout << "此三角形周长为" << l << endl;
	}
	else 
		cout << "此三边不能组成三角形" << endl;

	if (a==b || b == c || a == c)
		cout << "此三角形为等腰三角形" << endl;

	return 0;
}