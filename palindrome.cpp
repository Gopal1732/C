#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value";
cin>>n;
int x=n;
int rev=0;
int digit;
while (n!=0)
{
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
}
if (rev==x)
{
    cout<<"Palindrome";
}
else{
    cout<<"Not a Palindrome";
}


return 0;
}
