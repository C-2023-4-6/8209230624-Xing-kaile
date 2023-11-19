#include<iostream>
using namespace std;
int main()
{
	int a, b,p,q ;
	cout << "输入两个数" << endl;
	cin >> a >> b;
	p = a; q = b;
	while (a % b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	cout << "最小公因数是" << b << endl;
	cout << "最大公倍数是" << (p*q) / b<< endl;
	return 0;
}

