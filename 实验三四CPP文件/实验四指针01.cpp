#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int a = strlen(s1); int b = strlen(s2);
	int flag = -1;
	for (int i = 0; i < b - a + 1; i++)
	{
		int m = 0; int n = i;
		while (s1[m] == s2[n])
		{
			m++; n++;
			if (m == a)
			{
				flag = i;
				return flag;
			}
		}
	}
	return flag;
}
int main()
{
	char str1[20]; char str2[20];
	char* s1 = str1; char* s2 = str2;
	cout << "enter the string 1" << endl;
	cin.getline(str1, 20);
	cout << "enter the string 2" << endl;
	cin.getline(str2, 20);
	cout << indexof(s1, s2);







}