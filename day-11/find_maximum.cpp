#include<iostream>
using namespace std;

int maximum(int a, int b, int c){
    int d = (a>b)? (a>c ? a : c ) : (b>c ? b : c);
    return d;
}

int main(){
    int a, b, c;
    cout<<"enter three number: ";
    cin>>a>>b>>c;
    int max=maximum(a, b, c);
    cout<<"maximum number is "<<max;

    return 0;

}