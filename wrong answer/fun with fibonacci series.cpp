#include<stdio.h>
#include<math.h>
main()
{
int n,m;
short int t=0;
double s,a,b,c;
scanf("%hd",&t);
while(t--)
{
scanf("%lf%lf%d%d",&a,&b,&n,&m);
s=0;
if(n>2)
{
	s=a+b;
for(;n>2;n--)
{
c=a+b;
s=s+c;
a=b;
b=c;
}
}
else if(n==2)
s=a+b;
else
s=a;
printf("%.0lf\n",fmod(s,m));
}
return 0;
}
