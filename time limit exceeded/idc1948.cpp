#include<stdio.h>
#include<string.h>
int a[100000001];
main()
{
	short t,count;
	scanf("%hd",&t);
	int n;
	long long min,max,i,temp,maxa;
	while(t--)
	{
		scanf("%d",&n);
		if(n==1||n==2)
		{
		printf("-1\n");
		continue;
		}count=0;
		temp=n;
		while(temp>0)
		{
			temp=temp/10;
			count++;
		}
		//printf("count=%hd\n",count);
		temp=0;
		for(i=1;i<=count;i++)
	temp=temp*10+9;
	temp=temp-n;
	if(temp<n)
	{
	min=temp;max=n;
     }
	else
	{
		min=n;max=temp;
	}
		if(min%2==max%2)
		{
			printf("2\n");continue;
		}
	memset(a,0,600000*sizeof(int));//actually size is max+1
		for(i=3;i<=max;i+=2)
		{
			if(a[i])
			continue;
             if((min%i)==(max%i))
             {
             	printf("%lld\n",i);break;
             }
			temp=i*i;
			maxa=(max<99999)?max:99999; 
			while(temp<=maxa)//acyually it should be max
			{
				a[temp]=1;
				temp+=2*i;
			}
		}
		if(i>max)
	    printf("-1\n");
		}
	return 0;
}
