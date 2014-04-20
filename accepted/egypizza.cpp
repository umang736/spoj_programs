#include<stdio.h>
main()
{
	short n;
	scanf("%hd",&n);
	short i,a[n],b[n],ca=0,cb=0,cc=0;
	for(i=0;i<n;i++)
	{
	scanf("%hd/%hd",&a[i],&b[i]);
    if(a[i]==3)
	ca++;
	else if(a[i]==1&&b[i]==2)
	cb++;
	else
	cc++;
	}
	short count=ca,lefta=ca;
	count+=cb/2;
	if(cb%2==1)
	{
		count+=1;
		lefta+=2;
	}
if(cc<=lefta)
printf("%hd\n",count+1);
else
{
	count+=(cc-lefta)/4;
	if((cc-lefta)%4!=0)
	count+=1;
	printf("%hd\n",count+1);
}
	return 0;
}
