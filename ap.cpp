#include<iostream>
using namespace std;
int main(){
int n,count,a;
cin>>n;
count=1;
for (int i = 1; count <= n; i++)
{
    a=(3*i)+2;
    if (a%4!=0)
    {
        cout<<a<<" ";
        count++;
    }
}
cout<<"hello my name is gopal";
return 0;
}

//MY MISTAKE COUNT <= N;
