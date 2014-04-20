#include <stdio.h>
#include<math.h>
void multiply(long long F[2][2], long long  M[2][2])
{
  long long x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
  if(x>=1000000007)
  x=x%1000000007;
if(w>=1000000007)
  w=w%1000000007;
  if(y>=1000000007)
  y=y%1000000007;
  if(z>=1000000007)
  z=z%1000000007;
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
void power(long long F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  long long M[2][2] = {{1,1},{1,0}};
  power(F, n/2);
  multiply(F, F);
  if (n%2 != 0)
     multiply(F, M);
}
long long fib(int n)
{
  long long F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
int main()
{
  short int t;
  int i,m,n;
long long sum,sum1,sum2;
  scanf("%hd",&t);
  while(t--)
  {
  scanf("%d%d",&m,&n);
  sum1=fib(m+1)-1;
  sum2=fib(n+2)-1;
  sum=sum2-sum1;
  printf("%lld\n",sum);
  }
  return 0;
}


