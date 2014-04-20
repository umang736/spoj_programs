#include<stdio.h>
int main()
{
	int n,i,m,j;
	scanf("%d",&n);
	printf("\n");
	long long int b,s;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		s=0;
		for(j=0;j<m;j++)
		{
		scanf("%lld",&b);
		s=s+b;
		s=s%m;
        }
		if(s%m==0)
	    printf("YES\n\n");
	    else
	    printf("NO\n\n");
	}
	return 0;
}
