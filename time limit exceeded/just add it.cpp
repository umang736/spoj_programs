#include<stdio.h>
int modexpo(long long int a,long long int b,int n)
{
   long long int d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
	while(n!=0||k!=0) 
    {
        //Z(n) + Z(n-1) – 2*Z(n-2) = 2*(n-1)^k + n^k + 2*(n-1)^(n-1) + n^n
        int a,b,c,d,ans;
        b=modexpo(n,k,10000007);
        a=(2*modexpo(n-1,k,10000007))%10000007;
        d=modexpo(n,n,10000007);
        c=(2*modexpo(n-1,n-1,10000007))%10000007;
        ans=((a+b)%10000007+(c+d)%10000007)%10000007;
        printf("%d\n",ans);
        scanf("%lld%lld",&n,&k);
	}
    return 0;
}
