#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 10
long long b[max],c[max];
main()
{
	short t,k;
	int i,n,j;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%hd",&k);
		for(i=0;i<k;i++)
		{
		scanf("%lld",&b[i]);
	    }
		for(i=0;i<k;i++)
		scanf("%lld",&c[i]);
		scanf("%d",&n);
		if(n<=k)
		printf("%lld\n",b[n-1]);
		else
		{
			float a[];
			memset(a,0,sizeof(a));
		/*	for(i=0;i<n;i++)
			printf("%.0f ",a[i]);
			printf("\n"); */
		for(i=0;i<k;i++)
		a[i]=b[i];
	for(i=k;i<n;i++)
	{
		for(j=1;j<=k;j++)
		a[i]+=c[j-1]*a[i-j];
	}
	printf("%.0f\n",fmod(a[n-1],1000000000));
}
}
	return 0;
}
