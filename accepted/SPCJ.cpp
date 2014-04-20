#include<cstdio>
#include<algorithm>
using namespace std;
main()
{
int t,n,i,j,k,c;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
unsigned long long a[n];i=0;
while(i<n)
scanf("%llu",&a[i++]);
sort(a,a+n);
c=0;k=n-2;
for(i=n-1;k>=0;i--)
{
if(a[i]==-1)
continue;
//printf("i=%d  val=%d  ",i,a[i]);
for(j=k;(a[j]>(a[i]/2))&&j>=0;j--)
{	
}
if(j==-1)
{
break;
}
else
{
//	printf("j=%d  val=%d  ",j,a[j]);
if((2*a[j]==a[i])||((2*a[j]+1)==a[i]))
{
c++;
k=j-1;
a[j]=-1;//a[i]=-1;
}
else //2*a[j]+1<a[i]
k=j;
}
}
printf("%d\n",c);
}
return 0;}
