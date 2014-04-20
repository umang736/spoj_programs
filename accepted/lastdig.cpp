#include<stdio.h>
#include<math.h>
int modexpo(int a,int b)
{
    int d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%10;
        }
        b>>=1;
        a=(a*a)%10;
    }
    return d;
}
main()
{
	short int t;
	int a,b,i;
	scanf("%hd",&t);
	while(t--)
	{
	scanf("%d%d",&a,&b);
	printf("%d\n",modexpo(a,b));
	}
	return 0;
}
