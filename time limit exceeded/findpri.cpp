#include<stdio.h>
int a[10000001];
main()
{
	int i,t,n,k,c,tmp,count=0;
	scanf("%d",&t);
	a[1]=1;
	for(i=4;i<=10000000;i+=2)
	a[i]=1;
		for(i=3;i*i<=10000000;i+=2)
	{
		if(a[i]==1)
		continue;
		k=i*i;
		while(k<=10000000)
		{
			a[k]=1;
			k+=2*i;
		}
	}	
	while(t--)
	{
		scanf("%d",&n);c=0;
		int ans[n+1],i;
		ans[1]=0;
		for( i = 2; i <= n; i++ ) 
		{
    ans[i] = ans[i - 1];
      if( a[i]==0 ) 
      {
	  ans[i] = ans[i] + 1;
     }
     else if( i%2==0 && a[i/2]==0 ) ans[i] = ans[i] - 1;
      }
    printf("%d\n",ans[n]);
	}
}
/*
Now, for each N, we can pre-calculate the result. Just note that, say if you know ans[n-1] and want to determine ans[n] from it, 
this inequality will hold |ans[n] - ans[n-1]| <= 1.Because the current N will be added as an unmarked, or there may be a number 
which you added in the past, will be removed by one of the factors of this N.
 Or, if N is not a prime, then it will be already removed by the first algorithm i.e. sieve.

If N is a prime number, then no N1 has removed this N already, so in this case the ans[n] = ans[n-1] + 1.
If N is an even number, and if N/2 was a prime, you have added that with your result, but this should be removed at this stage. 
So in such a case, ans[n] = ans[n-1].
Why don't you need to consider other factors like N/3, N/5 ... ? 2 is the only even prime factor and it can produce even numbers by multiplying other 
primes with it. For other primes, p = 3, 5 and so on, if N/p is prime, then N cannot be even.
*/
