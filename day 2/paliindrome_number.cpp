#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int x=n;
    int reverse=0;
    while(n!=0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    if(reverse==x){
        cout<<"Number is Pallindrome";
    }
    else {
        cout<<"Number is not Pallindrome";
    }
    return 0;
}