#include<stdio.h>
#include<stdlib.h>
#define max 100
 int cmpfunc (const void * a, const void * b)
  {
   return ( *(int*)a - *(int*)b );
  }
main()
{
	short int t;
	int ng,nm,j,k,a[max],b[max];
	scanf("%hd",&t);
	while(t--)
	{
		printf("\n");
		scanf("%d%d",&ng,&nm);
		for(j=0;j<ng;j++)
		scanf("%d",&a[j]);
		for(j=0;j<nm;j++)
		scanf("%d",&b[j]);
		qsort(a,ng,sizeof(int),cmpfunc);
		qsort(b,nm,sizeof(int),cmpfunc);
		j=0;k=0;
		while(j<ng&&k<nm)
		{
			if(a[j]>=b[k])
			k++;
			else if(a[j]<b[k])
			j++;
		}
		if(k==nm)
		printf("Godzilla\n");
		else
		printf( "MechaGodzilla\n");
	}
	return 0;
}
