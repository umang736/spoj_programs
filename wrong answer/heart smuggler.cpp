#include<stdio.h>
main()
{
	int x,y,c,d;
	scanf("%d%d%d%d",&x,&y,&c,&d);
	if(c<y||d>x||c<=x&&d>=y)
	printf("NO\n");
	else
	printf("YES\n");
}
