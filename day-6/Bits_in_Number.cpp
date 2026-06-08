#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int binary[32];
    int i=0, count=0;;
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    cout<<"Binary equivalent: ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<binary[j];
        if(binary[j]==1)
        {
            count++;
        }
    }

    cout<<"\nNumber of bits in the binary equivalent: "<<count;
    
    return 0;
}