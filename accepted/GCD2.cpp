#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int gcd(int a, int b){
if(b==0) return a;
else return gcd(b,a%b);
}

int main(){
int t;
cin>>t;
while(t--){
int a,i;
long long num;
char b[252];
scanf("%d%s",&a,b);
if(a==0){
printf("%s\n",b);
continue;
}
int len=strlen(b);
for(i=0,num=0;i<len;i++){
num=(num*10+(b[i]-'0'));
if(num>=a)
num=num%a;
}
printf("%d\n",gcd(a,num));   
}
return 0;
}
