#include<stdio.h>
main()
{
    short int g,b,a;
	while(scanf("%hd%hd",&g,&b)&&g!=-1&&b!=-1)
	{
	     if(g==0&&b==0)
		a=0;
		else if(g==b)
		a=1;
		else if(g>b)
		a=(g+b)/(b+1);
		else if(g<b)
		a=(g+b)/(g+1);
		printf("%hd\n",a);
	}
	return 0;
}

