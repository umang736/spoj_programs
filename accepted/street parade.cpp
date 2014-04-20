#include<stdio.h>
int main()
{
	int n,m;
	while(1)
	{
	scanf("%d",&n);
	if(n==0)
	break;
	else
	{
	int top=-1,j=1,i=0;
	int a[n];
	while(i<n)
{
	scanf("%d",&a[i]);
	i++;
}
	int stack[n-1];
for(i=0;(j<(n+1)&&top<(n-1))||(i<n);)
{
	if(i==n)
	{
	if(stack[top]==j)
	{
		top--;j++;
	}
	else
	break;
	}
	else if(a[i]==j)
	{
	j++;i++;
	}
	else if(stack[top]==j)
	{
	j++;top--;
	}
	else
	{
	stack[++top]=a[i];
	i++;
	}
}
if(j==(n+1))
printf("yes\n");
else
printf("no\n");
    }
	}
return 0;
}
