#include<iostream>
using namespace std;
#include<cmath>

	int main()
	{
		double a, x, y, t;
		cout << "������һ����" << endl;
		cin >> a;
		x = a;
		if (a < 0)
		{
			cout << "С��������޷�����" << endl;
		}

		if (a == 0) 
		{
			cout << "0��ƽ����Ϊ0" << endl;
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

			cout <<"ƽ����Ϊ"<< x << endl;

		}

		return 0;
	}
