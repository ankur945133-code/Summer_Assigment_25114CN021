#include <iostream>
using namespace std;
int Perfect(int n) {
    int sum = 0;

    for (int i = 1; i <=n/2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    if (Perfect(n))
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}