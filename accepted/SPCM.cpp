#include<stdio.h>
#include<math.h>
short a[100000001];//size should be atleast 1000001
int p(long long i)
{
	if(i<=100000000)
	return (!a[i]);
	long long temp=sqrt(i),j=2;
	while(j<=temp)
	{
		if(a[j]==0)
		{
		if((i%j)==0)
		return 0;
	    }
	    j++;
	}
	return 1;
}
long long f(long long n)
{
		if(p(n))
		return 1;
long long i,sum,var,temp,count=0;
		sum=0;temp=sqrt(n);
		for(i=2;i<temp;i++)
		{
     		if((n%i)==0)
			{
			if(a[i]==0)
			{
				count++;
                sum+=i;
			}
	        	var=n/i;
               if(p(var))
              {
			  sum+=var;
			  count++;
		      }
		    }
		}
		   	if((n%i)==0)
			{
			if(a[i]==0)
			{
				count++;
                sum+=i;
			}
			var=n/i;
			 if((var!=i)&&p(var))
              {
			  sum+=var;
			  count++;
		      }
		   }
		return count+f(sum);
}
main()
{
	short t;
	long long n;
	scanf("%hd",&t);
		long long i,k;
a[1]=1;		a[2]=0;
	for(i=4;i<=100000000;i+=2)
	a[i]=1;
		for(i=3;i*i<=100000000;i+=2)
	{
		if(a[i]==1)
		continue;
		k=i*i;
		while(k<=100000000)
		{
			a[k]=1;
			k+=2*i;
		}
	}	
	while(t--)
	{
		scanf("%lld",&n);
	printf("%lld\n",f(n));
	}
	return 0;
}
