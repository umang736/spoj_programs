#include<stdio.h>
main()
{
	short t;
	long long int N,ans;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%lld",&N);
		 ans=(N*(N+2)*(2*N+1))/8;
		 printf("%lld\n",ans);
	}
	return 0;
}
