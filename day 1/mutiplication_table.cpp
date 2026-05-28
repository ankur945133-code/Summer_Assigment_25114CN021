#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"\n The multiplicartion table of ";
    cout<<n;
    for(int i=1;i<=10;i++){
        cout<<"\n"<<n<<"*"<<i<<"="<<n*i;

    }
    return 0;
}