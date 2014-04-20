#include <stdio.h>
#define i64 long long
int isnum(char *str, i64 *n, char *op)
{
*n= 0;int i;
if(str[0]<'0' || str[0]>'9')
{
*op = str[0];
return 0;
}
for(i=0; str[i]; i++)
*n = *n*10 + (str[i]-'0');
return 1;
}
int main()
{
char a[30], op;
int n;
i64 ans, num;
scanf("%d", &n);
while(n--)
{
ans = 0;
op = '+';
while(scanf("%s", a))
{
if(isnum(a, &num, &op))
{
switch(op)
{
case '+': ans += num; break;
case '-': ans -= num; break;
case '*': ans *= num; break;
case '/': ans /= num; break;
}
}
else if(op == '=')
{
printf("%lld\n", ans);
break;
}
}
}
return 0;
}


