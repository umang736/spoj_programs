#include<stdio.h>
int main()
{
 int b;
long long a,d,c,e,f,g,n,m,s;
 scanf("%d",&b);
 while(b--)
 {
 	scanf("%lld%lld%lld%lld",&n,&m,&a,&d);
 	s=0;c=a+d;e=c+d;f=e+d;g=f+d;
	 while(n<=m)
 	{
 	if(((n%g)!=0)&&((n%f)!=0)&&((n%e)!=0)&&((n%c)!=0)&&((n%a)!=0))
	 s++;	
	 n++;
 	}
	printf("%lld\n",s);
 }
 return 0;
}

