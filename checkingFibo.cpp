#include<iostream>
using namespace std;
int main(){
int a=0,b=1;
int n;
cin>>n;
int sum_ab;
for (int i = 0; i < n; i++)
{
    sum_ab=a+b;
    a=b;
    b=sum_ab;
}
if (a == n)
{
    cout<<"ture";
}
else 
{
    cout<<"False";
}
return 0;
}
