#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void *a, const void *b)
{
   return ( *(int*)a - *(int*)b );
}
int bs(int a[],int search,int l,int h)
{
	int low=l,mid,high=h;
  while(low<=high)
  {
  		mid=(low+high)/2;
  	if(search>a[mid])
  	{
  		low=mid+1;
  	}
  	else if(search<a[mid])
  	{
  		high=mid-1;
  	}
  	else
  	return mid;
  }
  return -1;
}
main()
{
int n,k;	
	scanf("%d%d",&n,&k);
	int a[n],i,c=0,t;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmpfunc);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	for(i=0;i<n;i++)
	{
	if(a[i]+k>a[n-1])
		break;
		t=bs(a,a[i]+k,i+1,n-1);
		if(	t!=-1)
	       c++;
	}
	printf("%d\n",c);
}
