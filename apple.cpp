#include<iostream>
using namespace std;
int main()
{
	double m = 0,sum=0,p;

		for (int d = 2; d < 65; d = d * 2)
			
		{
			m = 0.8 * d;
			sum = sum + m;
			p = sum / 6;
			cout << m << endl;
			
		}
cout << "ÿ��ƽ����" << p << "Ԫ" << endl;
	return 0;
	
}