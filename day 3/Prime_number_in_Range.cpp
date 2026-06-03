#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
int main() {
    int a, b;

    cout << "Enter range: ";
    cin >> a >> b;

    cout << "Prime numbers are: ";

    for (int i = a; i <= b; i++) {
        if (Prime(i))
            cout << i << " ";
    }

    return 0;
}