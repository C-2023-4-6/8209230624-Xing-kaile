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
	cout << "�ܹ�Ҫ���죺" << (day-1)<< endl;
	cout << "�ܹ�Ҫ��ֻ��" << sum << endl;
	cout << "ƽ������Ϊ��" << (a * sum) / (day-1) << endl;
	return 0;
}