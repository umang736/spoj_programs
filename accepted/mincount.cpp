#include<stdio.h>
main()
{
 short t;
long long n,mod,tmp;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==0)
		printf("0\n");
	else
	{
	--n;
	tmp=n/3;
	if((3*tmp+2)==n)
	printf("%lld\n",(tmp+1)*(3*tmp+4)/2);
	else if(3*tmp==n)
	printf("%lld\n",3*tmp*(tmp+1)/2);
	else
	printf("%lld\n",(tmp+1)*(3*tmp+2)/2);
	}
    }
	return 0;
}
