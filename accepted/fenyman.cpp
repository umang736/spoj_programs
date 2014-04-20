#include<stdio.h>
int main()
{
	int i,n=0;
	int a;
	while(1)
	{
	scanf("%d",&n);
    if(n==0)
    break;
    else
    {
	a=0;
    for(i=1;i<=n;i++)
    a=a+i*i;
    printf("%d\n",a);
	}
    }
    return 0;
}
