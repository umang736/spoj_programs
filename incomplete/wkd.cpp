#include<stdio.h>
main()
{
	short int t;
    int n,c,r,e;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];a[0]=1;i=1;t=0;
		for(c=2;c<n;)
		{
			r=(i*i+i)/2-1-;
			a[r]=1;
	    }
          for(i=0;i<n;i++)
          if(a[i]==0)
		  {
		  printf("%d\n",a[i]);break;
	      }
	}
	return 0;
} 
