#include<stdio.h>
#define max 1000001
int tree[max];
int n;//opposite of inversion partition
//inversion partition means that if i<j and a[i]>a[j] then they form an inversion pair
//here max is the maximum value of any element in the array
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
	while(indx<=max)
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
    long long ans=0;
     for(indx=1;indx<=maxval;indx++)
{
tree[indx]=0;
}
	for(indx=1;indx<=n;indx++)
	{
		ans+=(indx-1-read(a[indx]));
//	printf("%lld\n",ans);
	update(a[indx],1);
	}
	printf("%lld\n",ans);
    }
	return 0;
}
