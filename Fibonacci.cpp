#include<iostream>
using namespace std;
int main(){
int a,b,n,sum_ab;
a=0;
b=1;
cout<<"Enter the number you want";
cin>>n;
cout<<a<<" "<<b<<" ";
for (int i = 1; i < n; i++)
{
    sum_ab=a+b;
    a=b;
    b=sum_ab;
    cout<<sum_ab<<" ";
}

return 0;
}
