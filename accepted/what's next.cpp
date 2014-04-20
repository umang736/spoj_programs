#include<stdio.h>
main()
{
	short int a,b,c;
	while(1)
	{
	scanf("%hd%hd%hd",&a,&b,&c);
	if(a==0&&b==0&&c==0)
	break;
	if((b-a)==(c-b))
	printf("AP %d\n",c+b-a);
	else
	printf("GP %d\n",c*b/a);
	}
	return 0;
}
