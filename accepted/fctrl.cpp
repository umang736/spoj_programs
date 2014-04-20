#include<stdio.h>
main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		m=0;
		scanf("%d",&n);
	    while(n)
	    {
	    	m=m+n/5;
	    	n=n/5;
	    }
	    printf("%d\n",m);
	}
	return 0;
}
