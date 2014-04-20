#include<stdio.h>
main(){char c[21];int i,X=1;while(scanf("%s",c)!=EOF){X=1;i=-1;while(c[++i])if(c[i]=='F'||c[i]=='L'||c[i]=='D'||c[i]=='T')X*=2;printf("%d\n",X);}}


