#include<stdio.h>
main()
{
	short  int t,n;
	unsigned long long int r;
	int mod=1000000007;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%hd",&n);
		r=1;
		while(n)
		{
			r=r*n;
			if(r>mod)
			r=r%mod;
			n--;
		}
		printf("%llu\n",r);
	}
	return 0;
}
