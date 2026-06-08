#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int decimal = 0;
    int base = 1;
    while(n>0)
    {
        int last_digit = n % 10;
        decimal += last_digit * base;
        base *= 2;
        n /= 10;
    }
    cout<<"Decimal number: "<<decimal;

    return 0;
}