#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cout<<"Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"enter the "<<i<<" index element: ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd;

    return 0;
}