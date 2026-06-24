#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout<<"Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cout<<"enter the "<<i<<" index element: ";
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}
