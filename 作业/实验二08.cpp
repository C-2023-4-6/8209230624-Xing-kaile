#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "������һ���Ǹ���" << endl;
	cin >> a;
	float b=a , c = (a + 1) / 2;
	while (fabs(c - b)>= 1e-5)
	{
		b = c;
		c = (b + a /b) / 2;
	}
		cout << "������ƽ����= " << c << endl;
	return 0;
}