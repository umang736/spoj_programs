#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
main()
{
	char *p1,*p,*p2,str1[1001],str2[1001];
	short len;
	while(scanf("%s\n%s",str1,str2)!=EOF)
	{
		len=strlen(str1);
		sort(str1,str1+len);
		len=strlen(str2);
		sort(str2,str2+len);
		p1=str1;p2=str2;
		while(*p1!='\0')
		{
		p=strchr(p2,*p1);
			if(p)
			{
			p2=p+1;
			printf("%c",*p);
		    }
		p1++;
		}
		printf("\n");
	}
}
