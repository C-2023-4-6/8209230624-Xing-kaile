#include<iostream>
using namespace std;
int main()
{
	char p;
	cout << "ÊäÈëÒ»¸ö×ÖÄ¸" << endl;
	cin >> p;
	if (p >= 'a' && p <= 'z')
	{
		cout << char(p - 32) << endl;
	}
	else
	{
		cout << p + 1 << endl;
	}
	return 0;
}