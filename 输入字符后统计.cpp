#include<iostream>
using namespace std;
int main()
{
	char e;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "������һ���ַ�" << endl;

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
	cout << "Ӣ���ַ���" << a << "��" << endl;
	cout << "������" << b<< "��" << endl;
	cout << "�ո���" << c<< "��" << endl;
	cout << "�����ַ���" << d << "��" << endl;

	return 0;
}