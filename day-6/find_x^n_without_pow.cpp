#include<iostream>
using namespace std;
int main()
{
    int x, n;
    cout<<"Enter a number: ";
    cin>>x;
    int a = x;
    cout<<"Enter the power: ";
    cin>>n;
    for(int i=1; i<=n-1; i++){
        x = x * a;

    }
    cout<<a<<"^"<<n<<" is: "<<x;

    return 0;

}