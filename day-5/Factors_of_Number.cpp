#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"factors of "<<n<<" are: ";

    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<n; // the number itself is also a factor
    return 0;
}