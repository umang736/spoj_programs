
#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
char s1[5001],s2[5001];
int a[3][5001]; 
int max(int x,int y)
{
	if(x>y)
		return x;
	return y;
}
int LCS()
{
	int i,j,k;
	int b=0;     
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(s1[i]==s2[j])
				a[2][j]=a[1][j-1]+1;
			else
				a[2][j]=max(a[1][j],a[2][j-1]);
		}
		for(k=1;k<=n;k++)
			a[1][k]=a[2][k];
	}
	return a[2][m];
}
char ch[5004];
int main()
{
	int i,j,b,c,d;
	scanf("%d",&n);
	scanf("%s",ch);
	m=n;
	for(i=1;i<=n;i++)
		s1[i]=ch[i-1];
	for(i=1;i<=n;i++)
		s2[i]=s1[n-i+1];
	c=LCS();
	printf("%d",n-c);
	return 0;
}
	

