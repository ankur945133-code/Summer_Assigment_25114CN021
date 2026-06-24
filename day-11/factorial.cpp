#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int f=factorial(n);
    cout<<"factorial of "<<n<<" is "<<f;
    
    return 0;
}
