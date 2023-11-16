#include<iostream>
using namespace std;
int main()
{
	char e;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "请输入一串字符" << endl;

	while ((e = getchar()) != '\n')
	{
		if ((e <= 'z' && e >= 'a') || (e <= 'Z' && e >= 'z'))
			a++;
		else if (e <= '9' && e >= '0')
			b++;
		else if (e == ' ')
			c++;
		else
			d++;
	}
	cout << "英文字符有" << a << "个" << endl;
	cout << "数字有" << b<< "个" << endl;
	cout << "空格有" << c<< "个" << endl;
	cout << "其他字符有" << d << "个" << endl;

	return 0;
}