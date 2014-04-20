#include<stdio.h>
#include<string.h>
#include<math.h>
void check(char *str)
{
int i,tmp;
while(1)
{
tmp=strlen(str)-1;
for(i=0;i<=tmp/2;i++)
{
	if(str[i]!=str[tmp-i])
	
}

}
main()
{
	int n,i;
   char str[1000001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    	scanf("%s",str);
    	check(str);
    }
    return 0;
}
