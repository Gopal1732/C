#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int i,n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for ( i = 1; i <= n; i++)
    {
        int sumfibo=a+b;
        cout<<sumfibo<<" ";
        a=b;
        b=sumfibo;
    }
    
return 0;
}