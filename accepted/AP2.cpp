#include<stdio.h>
main()
{
short t1;scanf("%hd",&t1);	
unsigned long long t,tl,sum,n,f,i;
long long int d;
	while(t1--)
	{
		scanf("%lld%lld%lld",&t,&tl,&sum);
		n=(2*sum)/(t+tl);
		d=(tl-t)/(n-5);
		f=t-2*d;
		printf("%lld\n",n);
		for(i=0;i<n;i++)
		printf("%lld ",f+i*d);
			printf("\n");
}
	return 0;
}
