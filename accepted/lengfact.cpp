#include<math.h>
#include<stdio.h>
int main()
{
short t;
long long n;
long long D;
scanf("%hd",&t);
while(t--)
{
scanf("%lld",&n);
if(n!=0&&n!=1)
D=floor((log10(2*(3.1415)*n)/2+n*(log10(n)-log10(2.7182818284590452353)))/log10(10))+1;
else
D=1;
printf("%lld\n",D);
}
return 0;
}
