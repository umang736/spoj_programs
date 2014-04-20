#include<stdio.h>
#include<string.h>
main()
{
	unsigned long long sum; 
	int a,b,i,j;
	while(1)
	{
		scanf("%d%d",&a,&b);
		if(a==-1)
		break;
	   sum=0;
	   char str[11];
		for(i=a;i<=b;i++)
		{
			sprintf(str,"%d",i);
		//	printf("%s\n",str);
			j=0;
			while(str[j])
			{
				sum+=str[j++]-'0';
			}
		}
	printf("%llu\n",sum);	
	}
}
