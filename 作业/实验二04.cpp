#include<iostream>
using namespace std;
int main()
{
	float a, b, y=0;
	char c;
	cout << "��ֱ�����������" << endl;
	cin >> a >>b;
	cout << "������һ�������" << endl;
	cin >> c;
	switch (c)
	{
	case '+':
		cout << a + b << endl;break;
	case '-':
		cout << a - b << endl;break;
	case'*':
		cout << a * b << endl;break;
	case'/':
		if (b != 0)
		{
			cout << a / b << endl;break;
		}
		else
		{
			cout << "��������Ϊ��" << endl;
		}
	case'%':
		cout << "��ȷ�����������������������,��������1����������0" << endl;
		cin >> y;
		if (y == 1)
		{
			cout << int(a) % int(b) << endl;break;
		}
		else
		{
			cout << "����������һ������" << endl;break;
		}
	dafault:
		cout << "���������������Ϸ�" << endl;
	}
	return 0;
}