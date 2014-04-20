#include<stdio.h>
main()
{
	int i;
	long long t,s;
	while(1)
	{
	scanf("%lld",&t);
	if(t==-1)
	break;
int a[54];//2^54>10^16
i=0;
	while(t>0)
	{
		a[i]=t%2;
		t=t/2;
	i++;
	}
	t=0;s=1;
	for(;i>=1;i--)
	{
	t+=a[i-1]*s;
	s=s*2;
    }
	printf("%lld\n",t);
}
}
