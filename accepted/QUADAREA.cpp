#include<stdio.h>
#include<math.h>
main()
{
	short t;
	double a,b,c,d,s,area;
	scanf("%hd",&t);while(t--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		area=(s-a)*(s-b)*(s-c)*(s-d);
		area=sqrt(area);
		printf("%.2lf\n",area);
	}
	return 0;
}
