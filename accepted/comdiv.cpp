#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
main()
{
		int t,tmp1,a,b,j,i,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
	    tmp1=gcd(a,b);
		if(tmp==1)
		{
			printf("1\n");
		}
	   else if(tmp1==2)
	   {
	   	printf("2\n");
	   }
	    else
	    {
		j=sqrt(tmp1);c=2;
		i=2;
		while(i<j)
		{
			if(tmp1%i==0)
			{
			 c+=2;
		    }
			 i++;
		}
		if(tmp1%i==0)
		{
			c++;
			if((tmp1/i)!=i)
			c++;
        }
		printf("%d\n",c);
 	   }
	}
	return 0;
}
