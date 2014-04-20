#include<stdio.h>
main()
{
	short t;
	int n,i;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
		if(a[i]>i)
		{
		printf("NO\n");
        break;
		}
        }
if(i==n)
printf("YES\n");
	}
	return 0;
}
