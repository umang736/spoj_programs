#include<stdio.h>
#include<math.h>
main()
{
	short int t;
	double s;
	long long int r;
    scanf("%hd",&t);
    while(t--)
	{
	scanf("%lld",&r);
	s=(3*(r-1)*(r-1)+7*(r-1)+4)/2;
	s=fmod(s,1000007);
	printf("%.0lf\n",s);
	}
	return 0;
}
