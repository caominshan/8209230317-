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
	cout << "请输入圆锥底的半径" << endl;
	cin >> a;
	cout << "请输入圆锥的锥高" << endl;
	cin >> b;
	
	cout << "此圆锥的体积是" << YZTJ(a, b) << endl;
}