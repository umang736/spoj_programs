#include<stdio.h>
#include<string.h>
#include<math.h>
long long modexpo(long long a,double s,long long m)
{
    long long d=1;
    short t;
    while(s>0.0)
    {
    	t=fmod(s,2);
    	s=floor(s/2);
        if(t==1)
        {
            d=(d*a)%m;
        }
        a=(a*a)%m;
    }
    return d;
}
main()
{
	long long a,m,r;
	char arr[250];
	short t,i,l;
	double s;
    scanf("%hd",&t);
    while(t--)
    {
    	scanf("%lld%s%lld",&a,arr,&m);
    	l=0;i=strlen(arr)-1;s=0;
    	while(i>=0)
    	{
    		s=s+(arr[i]-'0')*pow(3,l);;
    		i--;l++;
    	}
    r=modexpo(a%m,s,m);
		printf("%lld\n",r);
    }
	return 0;
}
