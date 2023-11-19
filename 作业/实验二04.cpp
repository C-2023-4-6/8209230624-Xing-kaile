#include<iostream>
using namespace std;
int main()
{
	float a, b, y=0;
	char c;
	cout << "请分别输入两个数" << endl;
	cin >> a >>b;
	cout << "请输入一个运算符" << endl;
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
			cout << "除数不能为零" << endl;
		}
	case'%':
		cout << "请确保你输入的两个数都是整数,若是输入1，不是输入0" << endl;
		cin >> y;
		if (y == 1)
		{
			cout << int(a) % int(b) << endl;break;
		}
		else
		{
			cout << "请重新输入一遍数字" << endl;break;
		}
	dafault:
		cout << "你输入的运算符不合法" << endl;
	}
	return 0;
}