#include<stdio.h>
#define a 3.14159265358979323846
int main()
{
int n,x1,y1,r1,r2,i;scanf("%d",&n);for(i=1;i<=n;i++){scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x1,&y1,&r2);if(r1>r2)printf("%.2f\n",(a*(r1*r1-r2*r2)));else printf("%.2f\n",(a*(r2*r2-r1*r1)));}return 0;
}
