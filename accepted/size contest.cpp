#include<stdio.h>
int main()
{
	unsigned short int n;
    int a;
	 int s=0;
	scanf("%u",&n);
     while(n)
     {
     	scanf("%u",&a);
     	if(a>0)
		s=s+a;
		n--;
     }
	 printf("%d",s);
	 return 0;
}

