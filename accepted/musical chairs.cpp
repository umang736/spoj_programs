// TLE  getting in this -done by me
/*
#include<stdio.h>
#include<string.h>
main()
{
	int i,n,d,c,count,t;
	while(1)
	{
	scanf("%d%d",&n,&d);
	if(n==0&&d==0)
	break;
	c=0;
	int a[n];
	memset(a,0,(n)*sizeof(int));
	t=0;
    while(c<n-1)
    {
    	count=0;
	for(i=t;count<d;i++)
    {
	if(i==n)
	i=0;
	if(a[i]==0)
	count++;
    }
    a[i-1]=1;
    c++;
    t=i%n;
    }
    for(i=0;i<n;i++)
    if(a[i]==0)
    printf("%d %d %d\n0 0",n,d,i+1);
    }	
}
*/
#include <stdio.h>

int solve(int n, int d)
{
        register int i, a = 0;
        for(i=2; i<=n; i++)
                a = (a+d)%i;
        return a;
}

int main()
{
        int n, d;
        while(scanf("%d%d", &n, &d)==2 && n+d)
                printf("%d %d %d\n", n, d, solve(n, d) + 1);
        return 0;
}

