#include<iostream>
using namespace std;
int main(){
    int n,digit,rev=0;
    cout<<"Enter the number";
    cin>>n;
    for ( int i = 0; n!=0 ; n=n/10)
    {
        digit=n%10;
        rev=rev*10+digit;
    }
    
    cout<<rev;    
return 0;
}
