#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
	int t;
	char s;
	double t1,t2;
	scanf("%d ",&t);
	while(t--)
	{
	   scanf("%lf ",&t1);
		while(1)
	  {
		scanf("%c",&s);
		if(s=='=')
		{
		break;
	}
		scanf("%lf ",&t2);
		switch(s)
		{
		case '+':
		    t1=t1+t2;
		    break;	
		case '-':
			t1=t1-t2;
			break;
		case '*':
			t1=t1*t2;
		    break;
		case '/':
			t1=floor(t1/t2);
       }
	 }
	 printf("%.0lf\n",t1); 
   }
}
