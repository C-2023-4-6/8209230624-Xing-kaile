#include<iostream>
using namespace std;
int main()
{
	float a, b, c, sum;
	cin >> a >> b >> c;
	sum = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形" << endl;

			cout << "三角形周长= " << sum << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;

			cout << "三角形周长= " << sum << endl;
		}
	}
	else
		cout << "该三角形不合法" << endl;
	return 0;
}
