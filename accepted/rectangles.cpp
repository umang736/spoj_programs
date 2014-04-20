#include<stdio.h>
#include<math.h>
main()
{
	short int t,s,j,i;
	int r;
	scanf("%hd",&t);
    r=t;
    s=sqrt(t);
    for(i=2;i<=s;i++)
	{
		for(j=i;i*j<=t;j++)
		r++;
	}
	printf("%d\n",r);
	return 0;
}
