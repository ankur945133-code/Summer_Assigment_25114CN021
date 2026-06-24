#include<iostream>
using namespace std;
    int sum(int a, int b){
        cout<<(a+b);
        return 0;
    }
int main(){
    int a, b;
    cout<<"enter the both numbers: ";
    cin>>a>>b;

    sum(a, b);


    return 0;

}