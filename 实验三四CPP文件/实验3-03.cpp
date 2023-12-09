#include<iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << "ÇëÊäÈëÉãÊÏÎÂ¶È£º";
	cin >> c;
	f= c * 9 / 5 + 32;
	cout <<"CELSIUS"<<c<<"FAHRENHEIT" << f << endl;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È£º";
	cin >> f;
	c = (f - 32) * 5/ 9;
	cout << "CELSIUS" << c << "FAHRENHEIT" << f << endl;

}








