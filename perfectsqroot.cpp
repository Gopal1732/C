#include<iostream>
using namespace std;
int main(){
int n,out=1;
cout<<"Enter the number";
cin>>n;
while (out*out<=n)
{
    out++;
}
out--;
cout<<out;

return 0;
}

