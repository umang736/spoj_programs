#include<stdio.h>
int a[2][50001];
int max(int a,int b)
{
 return (a>=b?a:b);
 }
main()
{
 char s1[50001],s2[50001];scanf("%s%s",s1,s2);int i,j;	 
for(i=1;s1[i-1];i++)
{
for(j=1;s2[j-1];j++)
{	
 if(s1[i-1]==s2[j-1])
 {
  a[i%2][j]=a[(i-1)%2][j-1]+1;
 }
  else
  a[i%2][j]=max(a[(i-1)%2][j],a[i%2][j-1]);
}
}
printf("%d",a[(i-1)%2][j-1]);
return 0;
}
