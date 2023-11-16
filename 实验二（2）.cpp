#include<iostream>
using namespace std;
float BDS(float x)
{
	float y;
	if (x <= 0)
		cout << "请输入在定义域内的值" << endl;
	else if(0 < x&& x< 1)
		y = 3 - (2 * x);
	else if (x < 5)
		y = 2 / (4 * x) + 1;
	else if (x < 10)
		y = x * x;
	else cout << "请输入在定义域内的值" << endl;
	
	return y;
}
int main()
{
	float a;
	cout << "请输入一个数代入" << endl;
	cin >> a;
	cout << "结果为" << BDS(a) << endl;
}
