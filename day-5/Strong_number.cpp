#include<iostream>
using namespace std;

 int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}

int main()
{
    int n, sum = 0;
    cout<<"Enter the number: ";
    cin>>n;
    int temp = n;

    while(n>0){
        int digit = n%10;
        sum+=factorial(digit);
        n/=10;
    }
    if(sum==temp){
        cout<<temp<<" is a strong number.";
    }
    else{
        cout<<temp<<" is not a strong number.";
    }

    return 0;
}    

