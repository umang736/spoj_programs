#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
main()
{
short int t,n,i,j,k,c;
scanf("%hd",&t);
while(t--)
{
scanf("%hd",&n);
int a[n];i=0;
while(i<n)
scanf("%d",&a[i++]);
qsort(a,n,sizeof(int),cmpfunc);
c=0;k=1;
for(i=0;i<n-1;i++)
{
if(a[i]==-1)
continue;

for(j=k;a[j]<2*a[i]&&j<n;j++)
{	
if(a[j]==-1)
continue;
}

if(j==n)
break;

else
{
if(a[j]==2*a[i])
{
c++;
k=j+1;
a[j]=-1;//a[i]=-1;
}
else //a[j]>2*a[i]
k=j;
}
}
printf("%hd\n",c);
}
return 0;}
