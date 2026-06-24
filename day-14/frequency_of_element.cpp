#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;
    cout<<"enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"enter the key: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}