#include<stdio.h>
#include<stdlib.h>
int cmpfunc1 (const void * a, const void * b)
{
   return ( *(long long int*)a - *(long long int*)b );
}
int cmpfunc2 (const void * a, const void * b)
{
   return ( *(long long int*)b - *(long long int*)a );
}
main()
{
int n,i;
while(1)
{
	scanf("%d",&n);
	if(n==0)
	break;
	else
	{
	    long long int c[n],d[n];
		long long int s=0;
		for(i=0;i<n;i++)
		scanf("%lld",&c[i]);
		for(i=0;i<n;i++)
		scanf("%lld",&d[i]);
		qsort(c,n,sizeof(long long int),cmpfunc1);
        qsort(d,n,sizeof(long long int),cmpfunc2);
		for(i=0;i<n;i++)
		s=s+c[i]*d[i];
		printf("%lld\n",s);
	}
}
return 0;	
}
