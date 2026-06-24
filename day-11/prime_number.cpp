#include<iostream>
using namespace std;

int prime_num(int n){
    for(int i=2;i<=n/2;i++){

        if(n%i==0){
            cout<<n<<" is not prime";
            break;
        }
        else{
            cout<<n<<" is prime";
            break;
        }
    }
    return 0;
}

int main (){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    prime_num(n);


    return 0;

}