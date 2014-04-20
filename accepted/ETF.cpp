#include<stdio.h>
main()
{
	short t;
	int i,n,result;
	scanf("%hd",&t);
	while(t--)
	{
	scanf("%d",&n);result=n;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		result=result-result/i;
		while(n%i==0)
		n=n/i;
	}
	if(n!=1)
	result=result-result/n;
	printf("%d\n",result);
    }
	return 0;
}
