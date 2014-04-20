#include<stdio.h>
#include<string.h>
#define LL long long int
 struct node
{
	LL par;
	char c;
} q[20003];
int que[20003];
int visited[20003];
LL n;
LL mod(LL a,LL b)
{
    if(a<b)
    {
        return a;
    }
    else
    return a%b;
}
void bfs()
{   
  LL i=1,high=0,low=0,rem,temp;
 que[high++]=1;
  q[i].c='1';
  q[i].par=-1;
  visited[i]=1;
 // printf("par=%lld c=%c\n",q[i].par,q[i].c);
  while(1)
  {
  	//printf("low=%lld\n",low);
  	i=que[low++];
  	//printf("pop i=%lld par=%lld c=%c\n",i,q[i].par,q[i].c);
  	if(i==0)
  	return;
    rem=mod(i*mod(10,n),n);
    //printf("rem=%lld\n",rem);
    if(visited[rem]==0)
    {
    que[high++]=rem;
    q[rem].c='0';
    q[rem].par=i;   
    //printf("push i=%lld par=%lld c=%c\n",i,q[rem].par,q[rem].c);
    visited[rem]=1;
    }
	rem=mod(rem+1,n);
	//printf("rem=%lld\n",rem);
    if(visited[rem]==0)
	{
	que[high++]=rem;
	q[rem].par=i; 
    q[rem].c='1';
  //  printf("push i=%lld par=%lld c=%c\n",i,q[rem].par,q[rem].c);
    visited[rem]=1;
	}
  }
}
void print(int s)
{
	if(s==-1)
	return;
	print(q[s].par);
	printf("%c",q[s].c);
}
int main()
{
  int t,i;
  scanf("%d",&t);
  while(t--)
  {   
    scanf("%lld",&n);
	if(n==1)
	{
	printf("1\n");
    }
    else
    {    
	for(i=0;i<n+3;i++)
    {
    visited[i]=0;
	que[i]=-1;
	}
	
	/*for(i=0;i<n+3;i++)
    {
    printf("%d %d\n",visited[i],que[i]);
    }*/
	bfs();
    print(0);
	printf("\n");
  }
  }
  return 0;
}
