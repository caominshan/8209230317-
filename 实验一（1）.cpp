#include<iostream>
using namespace std;
#define PI 3.1415926
float YZTJ(int a, int b)
{
	float v;
	  v = PI * a * a * b*1/3;
	return v;
}
int main()
{
	int a , b ;
	cout << "������Բ׶�׵İ뾶" << endl;
	cin >> a;
	cout << "������Բ׶��׶��" << endl;
	cin >> b;
	
	cout << "��Բ׶�������" << YZTJ(a, b) << endl;
}