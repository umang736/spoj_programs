#include<stdio.h>
#include<string.h>
main()
{
char str[100001],symbol;
int i,j,k,m,temp;	
	while(scanf("%s",str)!=EOF)
	{
		char str2[100001],str3[100001];
	     i=0;k=0;
	     while(str[i])
		{
     for(j=i+1;str[j]==str[i];j++)
	  {
	  }
	  
	if(j-i>=4)
		{
			sprintf(str3,"%d",j-i);
			m=0;
		while(str3[m])
		{
         str2[k++]=str3[m++];
		 }
		str2[k++]='!';
		str2[k++]=str[i];
	    }
	    else
	    {
	    	while(j>i)
	    	{
	    	str2[k++]=str[i++];	
	    	}
	    }
		 i=j;
		}
		str2[k]='\0';
		printf("%s\n",str2);
	}
	return 0;
}
