#include<stdio.h>
unsigned int rev (unsigned int x)
{
	unsigned int y=0,k;
	while(x>0)
	{
		k=x%10;
		y=y*10+k;
		x=x/10;
	}
   return y;	
}
int main()
{
	unsigned int n,i,a,b,c;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d%d",&a,&b);
	a=rev(a);
	b=rev(b);
	printf("%d\n",rev(a+b));
	}
return 0;
}
