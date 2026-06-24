#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"enter the "<<i<<" index element: ";
        cin >> arr[i];
}

    cout << "Array elements: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}