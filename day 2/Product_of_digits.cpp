#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int product=1;
    while(n>0){
        product=product*(n%10);
        n=n/10;
    }
    cout<<"product of digits of number is : "<<product;
    return 0;
}