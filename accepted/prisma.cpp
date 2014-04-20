#include<stdio.h>
#include<math.h>
main()
{
	short t;
	double volume,a,area;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%lf",&volume);
		//a=h for minimum area
		a=pow(4*volume,1.0/3);
		area=pow(3,1/2.0)*(a*a/2+4*volume/a);
		printf("%.10lf\n",area);
	}
	return 0;
}

