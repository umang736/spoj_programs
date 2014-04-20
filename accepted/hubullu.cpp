#include<stdio.h>
main()
{
	short t,sta;
	int n;
	scanf("%hd",&t);
	while(t--)
	{
	scanf("%d%hd",&n,&sta);
    if(sta==0)
    printf("Airborne wins.\n");
    else
    printf("Pagfloyd wins.\n");
    }
}
