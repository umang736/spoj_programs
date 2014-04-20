#include<stdio.h>
 /*
 A regular n-gon is constructible with ruler and compass if and only if  n = 2kp1p2...pt  where k and t are non-negative integers, and each pi is a (distinct) Fermat prime
Only five Fermat primes are known:

    F0 = 3, F1 = 5, F2 = 17, F3 = 257, and F4 = 65537
    */
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int N,temp;
  scanf("%d",&N);
  temp=N;
  while(temp % 2==0)
   temp=temp/2;
  if(temp % 3==0)
   temp=temp/3;
  if(temp % 5==0)
   temp=temp/5;
  if(temp % 17==0)
   temp=temp/17;
  if(temp % 257==0)
   temp=temp/257;
  if(temp % 65537==0)
   temp=temp/65537;
  if(temp==1)
   printf("Yes\n");
  else
   printf("No\n");
 }
 return 0;
}
