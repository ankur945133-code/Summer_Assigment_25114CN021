#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    while (x!=y) {
        
        if(x > y)
            x = x-y;
        else
            y=y-x;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}