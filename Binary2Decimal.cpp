#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int digit;
    int answer=0;
    for (int i = 0; n!=0; i++)
    {
        digit =n%10;
        if (digit==1)
        {
            answer=answer+pow(2,i);
        }
        n=n/10;
    }
    cout<<"The answer is"<<answer;
return 0;
}
