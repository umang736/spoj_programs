#include<stdio.h>
main()
{
	short t;
	double ans,r,c=4.686291501042635871440065601246;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%lf",&r);
		ans=c*r*r*r;
		printf("%.4lf\n",ans);
	}
	return 0;
}
