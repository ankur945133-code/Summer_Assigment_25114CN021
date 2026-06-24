#include <iostream>
#include <cmath>
using namespace std;

int Armstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    int t = n;
    while (t) {
        digits++;
        t /= 10;
    }

    t = n;
    while (t) {
        sum += pow(t % 10, digits);
        t /= 10;
    }

    return sum == temp;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    if (Armstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}