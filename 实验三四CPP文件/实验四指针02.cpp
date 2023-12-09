#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int a = strlen(hexString);
	int sum = 0;
	int n[20];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'Z')
		{
			n[i] = (hexString[i] - 55) * pow(16, a - i - 1);
		}
		else
		{
			n[i] = (hexString[i] - '0') * pow(16, a - i - 1);

		}
		sum = sum + n[i];
	}
	return sum;
}
		int main()
		{
			char hexstring[20];
			char* str = hexstring;
			cout << "输入一个十六进制数" << endl;
			cin.getline(hexstring, 20);
			cout << parseHex(str) << endl;
			return 0;


		}








