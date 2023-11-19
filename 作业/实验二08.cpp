#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "请输入一个非负数" << endl;
	cin >> a;
	float b=a , c = (a + 1) / 2;
	while (fabs(c - b)>= 1e-5)
	{
		b = c;
		c = (b + a /b) / 2;
	}
		cout << "此数的平方根= " << c << endl;
	return 0;
}