#include<stdio.h>
main()
{
 int n,i,t;
 while(1)
 {
 	scanf("%d",&n);
 	if(n!=-1)
 	{
 	i=1;t=1;
	 while(t<n)
	 	{
	 	t=t+i*6;i++;
        }
	 if(t==n)
     printf("Y\n");
     else
     printf("N\n");
    }  	
 	else 
 	break;
 }
 return 0;
}
