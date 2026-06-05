#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int a=0, b=1, c,d;
    cout<<"Fibonacci Series: ";

    for(int i=0; i<n; i++){
        cout<<a<<" ";
        d = a;
        c=a + b;
        a = b;
        b = c;
    }
    cout<<endl<<"The "<<n<<"th term of the fibonacci series is: "<<d;
    return 0;
}