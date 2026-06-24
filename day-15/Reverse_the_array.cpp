#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int arr2[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Reversed Array: ";

    for(int i = 0; i<n; i++){

        arr2[i]=arr[n-i-1];
        cout << arr2[i] << " ";
    }

    return 0;
}