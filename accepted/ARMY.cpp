#include<stdio.h>
void merge_sort(int a[],int s,int m,int e)
{
	int n=e-s+1,s1=s,e1=e;
	int i=0,k=m+1,c[n];
	while(s<=m&&k<=e)
	{
		if(a[s]<a[k])
		c[i++]=a[s++];
		else
		c[i++]=a[k++];
	}
	while(s<=m)
	{	
		c[i++]=a[s++];
	}
	while(k<=e)
	{
		c[i++]=a[k++];
	}
	for(i=0;i<n;i++)
	a[s1++]=c[i];
}
void brk_comb(int a[],int s,int e)
{
	if(s==e)
	return ;
	int m=(s+e)/2;
	brk_comb(a,s,m);
	brk_comb(a,m+1,e);
	merge_sort(a,s,m,e);
}
main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	brk_comb(a,0,n-1);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
