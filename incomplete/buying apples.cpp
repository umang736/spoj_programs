#include<stdio.h>
main()
{
 long long int c,n,k,s=0,res;
 scanf("%lld",&c);
 while(c--)
 {
 	scanf("%hd%hd",&n,&k);
 	short int a[k];
 	for(i=0;i<k;i++)
 	{
 	scanf("%hd",&a[i]);
    if(a[i]!=-1&&(i+1)==k)
     s=a[i];
	}
	for(i=0;i<k;i++)
 }	
 return 0;
}
