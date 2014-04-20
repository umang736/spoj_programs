#include<iostream>
using namespace std;
int main()

{

int t;
cin>>t;
int a;
while(t--)
{
    cin>>a;
    cout<<((a%2==0)?a/2:(a/2+1))<<endl;
}
return 0;
}
