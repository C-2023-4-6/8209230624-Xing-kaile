#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "ÊäÈë»ªÊÏÎÂ¶È" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << fixed << setprecision(2) << C << endl;
	return 0;
}



