#include<iostream>
#include <iomanip>
using namespace std;
float HZS(float F)
{
	float C;
	C = 5 * (F - 32) / 9;
	return C;
}
int main()
{
	//C = 5×（F- 32）/9，F = 9×C /5+32
	float F,f; int a;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	a = HZS(F)*100;
	f = a / static_cast<float>(100);
	
	cout << "摄氏温度为" <<f << endl;
}