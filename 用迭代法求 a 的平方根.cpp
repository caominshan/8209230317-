#include<iostream>
using namespace std;
#include<cmath>

	int main()
	{
		double a, x, y, t;
		cout << "请输入一个数" << endl;
		cin >> a;
		x = a;
		if (a < 0)
		{
			cout << "小于零的数无法计算" << endl;
		}

		if (a == 0) 
		{
			cout << "0的平方根为0" << endl;
		}

		if (a > 0) 
		{
			do 
			{
				y = (x + a / x) / 2;
				t = x;
				x = y;
				y = t;
			} 
			while (fabs(x - y) > 1 / 10000);

			cout <<"平方根为"<< x << endl;

		}

		return 0;
	}
