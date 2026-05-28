#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        count=count+1;
        n=n/10;
    }
    cout<<"count of digit in number is : "<<count;
    return 0;
}