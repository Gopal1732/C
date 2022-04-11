#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
int a,b;
cin>>a;
cin>>b;
cout<<"BEFORE SWAP"<<endl;
cout<<a<<" "<<b<<" "<<endl;
swap(&a,&b);
cout<<"AFTER SWAP"<<endl;
cout<<a<<" "<<b<<" ";
return 0;
}
