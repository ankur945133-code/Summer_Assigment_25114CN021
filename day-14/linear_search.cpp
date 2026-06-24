#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout<<"Enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        {
            cout<<"enter the "<<i<<" index element: ";
            cin >> arr[i];
        }
        cout<<"enter the key: ";
    cin >> key;

    int index = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != 0)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}