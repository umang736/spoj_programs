#include<stdio.h>
#include<string.h>
#define max 1000
main()
{
short i;
int a,t,b;
char str1[max],str2[max],str3[max];
scanf("%d",&t);	
	while(t--)
	{
		a=0,b=0;
		printf("\n");
		scanf("%s + %s = %s",str1,str2,str3);
       if(strchr(str1,'m'))
     {
     	i=0;
		while(str2[i]!='\0')
		{
			a=a*10+str2[i]-48;
		i++;
		}
		i=0;
		while(str3[i]!='\0')
		{
			b=b*10+str3[i]-48;
		i++;
		}
		sprintf(str1,"%d",b-a);
     }
       else if(strchr(str2,'m'))
       {
       	i=0;
  		while(str1[i]!='\0')
		{
			a=a*10+str1[i]-48;
		i++;
		}
		i=0;
		while(str3[i]!='\0')
		{
			b=b*10+str3[i]-48;
		i++;
		}
        sprintf(str2,"%d",b-a);
       }
       else
       {
       	i=0;
       	while(str1[i]!='\0')
		{
			a=a*10+str1[i]-48;
		i++;
		}
		i=0;
		while(str2[i]!='\0')
		{
			b=b*10+str2[i]-48;
		i++;
		}
        sprintf(str3,"%d",b+a);
       }
       printf("%s + %s = %s\n",str1,str2,str3);
   }
}
