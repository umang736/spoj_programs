#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
short t;	
char str1[2*100000+1],sub[100000+1];
	scanf("%hd",&t);
	getchar();
	while(t--)
	{
		scanf("%s%s",str1,sub);
		strcat(str1,str1);
		if(strstr(str1,sub))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
