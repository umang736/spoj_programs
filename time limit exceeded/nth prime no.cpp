 #include<stdio.h> 
 #include<math.h>
 main()
 {int N; while(scanf("%d",&N)!=EOF){ int i,n=1,d=1,temp; while(n<N){	
 d+=2;temp=sqrt(d);i=3;while(i<=temp){if(d%i==0)
{break;}i+=2;}if(i>temp)n++;}printf("%d\n",d);}return 0;}
