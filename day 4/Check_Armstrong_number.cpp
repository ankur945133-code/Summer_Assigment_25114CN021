#include<iostream>
#include<cmath>
using namespace std;
int power(int x, int y){
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}

int order(int n){
    int t = 0;
    while (n!=0) {
        t++;
        n = n / 10;
    }
    return t;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int x = order(n);
    int temp = n, sum = 0;
    while (temp!=0) {
        int r = temp % 10;
        sum += power(r, x);
        temp = temp / 10;
    }
    if (sum == n)
        cout<<"The number is an Armstrong number.";
    else
        cout<<"The number is not an Armstrong number.";
    return 0;
}