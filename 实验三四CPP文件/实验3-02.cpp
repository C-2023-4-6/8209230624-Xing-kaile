#include<iostream>
using namespace std;
bool is_prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) 
	{
		if (n % i == 0) return false;
	}
	return true;
}
int main()
{
	int random=200,m,n=0;
	
for (m=2;m<=random;m++)
if (is_prime(m) == 1)
{
	n++;
	if (n % 10 == 0)
	{
		cout << m << endl;
	}
	else cout << m << "\t";
	}
}