#include<stdio.h>
#include<math.h>
main()
{
int n,i,m;
scanf("%d",&n);      
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&m);
 int b[2];
 for(i=0;i<m;i++)
 {
 scanf("%d%d",&b[0],&b[1]);
 printf("%d\n",b[0]>b[1]?b[0]:b[1]);
 }
 return 0;	
}
