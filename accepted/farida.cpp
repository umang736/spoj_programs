/* write your code below */
#include<stdio.h>
long long int max(long long int a,long long int b)
{
return (a>=b?a:b);
}
main()
{
int t,j,i,n;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
scanf("%d",&n);
long long int dp[n+1],a[n+1];
dp[0]=0;
if(n>0)
{
scanf("%lld",&a[1]);
dp[1]=a[1];
}
for(i=2;i<=n;i++)
{
scanf("%lld",&a[i]);
dp[i]=max(dp[i-2]+a[i],dp[i-1]);
}
printf("Case %d: %lld\n",j,dp[n]);
}
return 0;
}

