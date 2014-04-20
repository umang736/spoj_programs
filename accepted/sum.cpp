#include<stdio.h>
main()
{
 int t;
 int n,i;
 unsigned long long int a,sum;
 scanf("%d",&t);
 while(t--)
 {
 	scanf("%d",&n);
 	sum=0;
 	if(n>3)
 	{   
 	a=(n-1)/3;
 	sum=sum+a*(a+1)/2*3;
	a=(n-1)/5;
 	sum=sum+a*(a+1)/2*5;
	a=(n-1)/15;
 	sum=sum-a*(a+1)/2*15;
	printf("%llu\n",sum);
	 }
 	else
 	printf("0\n");
 }	
 return 0;
}
