#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	unsigned long long time;
};
void merge_sort(int a1[][2],int s,int m,int e)
{
	int n=e-s+1,s1=s;
	int i=0,k=m+1,c[n][2];
	while(s<=m&&k<=e)
	{
		if(a1[s][0]<=a1[k][0])
		{
		c[i][0]=a1[s][0];
		c[i][1]=a1[s++][1];
		}
		else
		{
			c[i][0]=a1[k][0];
		c[i][1]=a1[k++][1];
        }
        i++;
	}
	while(s<=m)
	{	
	c[i][0]=a1[s][0];
		c[i++][1]=a1[s++][1];
	}
	while(k<=e)
	{	c[i][0]=a1[k][0];
		c[i++][1]=a1[k++][1];
	}
	for(i=0;i<n;s1++,i++)
	{
		a1[s1][0]=c[i][0];
	a1[s1][1]=c[i][1];
	}
}
void brk_comb(int a1[][2],int s,int e)
{
	if(s==e)
	return ;
	int m=(s+e)/2;
	brk_comb(a1,s,m);
	brk_comb(a1,m+1,e);
	merge_sort(a1,s,m,e);
}
main()
{
	int t,i,j,c=0,tmp;
	unsigned long long tim=0;
	scanf("%d",&t);
	int a1[t+1][2];
	struct node a[t];
	for(i=0;i<t;i++)
	{
	scanf("%d",&a[i].val);
	a1[i][0]=a[i].val;
	a1[i][1]=i;
	}
	a1[t][0]=-1;
	a1[t][1]=t;
	brk_comb(a1,0,t-1);j=0;
	for(c=0;c<t;)
	{
		while(a[a1[j][1]].val==a[a1[j+1][1]].val)
		j++;
		tmp=a[a1[j++][1]].val;
		if(tmp!=0)
	     {
	 tim+=(t-c)*(tmp-1);
	for(i=0;i<t;i++)
	{
		if(a[i].val==0)
		continue;
		++tim;
		a[i].val-=tmp;;
		if(a[i].val==0)
		{
		a[i].time=tim;
		c++;
	    }
	}
         }
    }
    for(i=0;i<t;i++)
     printf("%llu\n",a[i].time);
     return 0;
}


