#include<iostream>
using namespace std;
int main()
{
	const float a = 0.8;
	int sum=0,  day ,x=2;
	for (day = 1;x < 100;day++)
	{
		sum = sum + x;
		x *= 2;
	}
	cout << "总共要买几天：" << (day-1)<< endl;
	cout << "总共要买几只：" << sum << endl;
	cout << "平均费用为：" << (a * sum) / (day-1) << endl;
	return 0;
}