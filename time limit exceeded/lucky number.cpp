#include<stdio.h>
int check(int n,int l)
{
 int d=0;
 while(n>1)
 {
 if(n==l)
 {
 d++;
 break;	
 }
 else if(n%l==0)
 {
 n=n/l;
 continue;
 }
 else
 break;
 }
 return d;
 }
main()
{
 int a,b,c,i,j;
 register int n,k,e,f,count;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
 scanf("%d%d",&b,&c);
 count=0;
for(j=b;j<=c;j++)
{
n=j,e=n%4,f=n%7;
if(e==0)
{
 k=check(n,4);
 count=count+k;
}
 else if(f==0)
 {
  k=check(n,7);
 count=count+k;
 }
 else if((e==0)&&(f==0))
 count++;
 else
 {
  k=n%10;
  if((k!=4)&&(k!=7))
  {
  } 
  else 
  {
  while(n>1)
  {
     if(n==4||n==7)
     {
     count++;
     break;
     }
     
	 else if(k==4 ||  k==7)
	 {
     n=n/10;
     k=n%10;
	 }
	 else
	 break;     
  }
 }
}
}
  printf("%d\n",count);
  }
return 0;
 } 

