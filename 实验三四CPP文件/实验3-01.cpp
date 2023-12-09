#include<iostream>
using namespace std;
int gcd(int, int); 
int lcm(int, int); 

int main()
{

  
        int num1, num2, g, l;
        cout << "请输入两个数：";
        cin >> num1 >> num2;
        
        g = gcd(num1, num2); 
        l = lcm(num1, num2); 
        cout << "他们的最大公约数是：" << g << endl; 
        cout << "他们的最小公倍数是：" << l << endl; 
        return 0;
    }

    int gcd(int x, int y) {
        int temp, a;
       
        if (x < y) {
            temp = x;
            x = y;
            y = temp;
        } 
        while (y != 0) {
            a = x % y;
            x = y;
            y = a;
        }
        return x; 
    }

    int lcm(int m, int n) {
        int g1, b;
        g1 = gcd(m, n);
        b = (m * n) / g1; 
        return b; 
    }












