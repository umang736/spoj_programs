#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
	short t,j,sum;
	unsigned long long n,i;
	char str[31];
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%llu",&n);
		for(i=n;;i++)
		{
			sprintf(str,"%llu",i);
			j=0;sum=0;
			while(str[j])
		{
			sum+=str[j++]-'0';
		}
		if(i%sum==0)
		{
			printf("%llu\n",i);
			break;
		}
		}
	}
	return 0;
}
