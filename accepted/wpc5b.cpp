#include<stdio.h>
unsigned long long int modexpo(int a,long long int b)
{
    unsigned long long int d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%10;
        }
        b>>=1;
        a=(a*a)%10;
    }
    return d;
}
main()
{
	int t;
	long long int a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
	printf("%llu\n",modexpo(a%10,b));
    }
    return 0;
}
