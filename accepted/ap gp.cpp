
#include<stdio.h>
main()
{
	int n,j,i;
	long long int a,first,last,sum,terms,differ;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld",&first,&last,&sum);
	terms=(2*sum)/(first+last);
	if(terms<7)
	continue;
	else
	{
	differ=(last-first)/(terms-5);
	a=first-2*differ;
	printf("%lld\n",terms);
	for(j=0;j<=terms-1;j++)
	{
		printf("%lld",(a+(j*differ)));
		printf(" ");
	}
	printf("\n");
	}
	}
	return 0;
}
