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
    int a, b;
    cout<<"Enter the Range: ";
    cin>> a >> b;

    for(int i=a; i<=b; i++){
        int x = order(i);
        int temp = i, sum = 0;
        while (temp!=0) {
            int r = temp % 10;
            sum += power(r, x);
        temp = temp / 10;
    }

    if (sum == i)
        cout<<i<<" The number is an Armstrong number."<<endl;
}
    return 0;
}