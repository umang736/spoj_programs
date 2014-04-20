#include<stdio.h>
#include<stdio.h>
#define max 200
int m,n;
void fun(int i,int j,char a[][max])
{
	if(i>=m||j>=n||i<0||j<0||a[i][j]=='.'||a[i][j]==0)
return;
	a[i][j]=0;
	fun(i,j-1,a);
	fun(i-1,j-1,a); 
	  fun(i-1,j+1,a);
		fun(i-1,j,a);
fun(i,j+1,a);
fun(i+1,j,a);
fun(i+1,j-1,a);
fun(i+1,j+1,a);
}
main()
{
	short t;
	scanf("%hd",&t);
	while(t--)
	{
	scanf("%d%d",&m,&n);
	int i,j;
	char a[m][max];
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	scanf(" %c",&a[i][j]);
    }
int c=0;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	if(a[i][j]=='#')
	{
		fun(i,j,a);
	c++;
	}
	printf("%d\n",c);
    }
	return 0;
}
