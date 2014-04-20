#include<stdio.h>
#include<stdlib.h>
#define max 10000001
int tree[max];
int n;
long long read(int indx)
{
	long long sum=0;
	while(indx>0)
	{
		sum+=tree[indx];
//	printf("%lld\n",sum);
		indx-=(indx&-indx);
	//	printf("%d\n",indx);
	}
return sum;
}
int maxval;
void update(int indx,int val)
{
	while(indx<=maxval)
	{
		tree[indx]+=val;
	//	printf("tree[%d]=%d\n",indx,tree[indx]);
		indx+=(indx&-indx);
	}
}
main()
{
	int indx,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n+1];maxval=0;
	for(indx=1;indx<=n;indx++)
	{
	scanf("%d",&a[indx]);
	if(a[indx]>maxval)
	maxval=a[indx];
   // printf("%d\n",a[indx]);
    }
    getchar();
    getchar();
     for(indx=1;indx<=maxval;indx++)
    tree[indx]=0;
	long long ans=0;
	for(indx=n;indx>0;indx--)
	{
		ans+=read(a[indx]);
	//	printf("%lld\n",ans);
	update(a[indx],1);
	}
	printf("%lld\n",ans);
    }
 return 0;
}
