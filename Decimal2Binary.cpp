#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int bit;
    int answer=0;
    cout<<"Enter the value of n";
    cin>>n;
    for (int i = 0; n!=0; i++)
    {
        bit = n & 1;
        answer=answer +bit*(pow(10,i));
        n = n>>1;
    }
    
    cout<<"The answer is"<<answer;
    
return 0;
}