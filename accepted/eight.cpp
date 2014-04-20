#include<stdio.h>
#include<stdlib.h>
main()
{
	short int t;
	long long int k;
	scanf("%hd",&t);
	while(t--)
{
	scanf("%lld",&k);
	if(k!=1)
	printf("%lld\n",192+250*(k-1));
	else
	printf("192\n");
}
	return 0;
}
