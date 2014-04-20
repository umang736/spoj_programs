#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	short t;
	scanf("%hd",&t);
	char str[100001];
	int len,i;
	/*
	Consider the string “ABCDD”

Let dp[i] = { number of subsequences possible from string[1...i]}
	dp[0] = 1   { }

dp[1]= 2   { } ,A

dp[2] = 4  { } ,A ,B ,AB

dp[3] = 8  { } ,A ,B ,AB ,C ,AC,BC,ABC

dp[4] = 16 { } ,A ,B ,AB ,C ,AC,BC,ABC,D,AD,BD,ABD,CD,ACD,BCD ,ABCD

dp[5]=24 { } ,A ,B ,AB ,C ,AC,BC,ABC,D,AD,BD,ABD,CD,ACD,BCD ,ABCD,DD,ADD,BDD,ABDD,CDD,ACDD,BCDD ,ABCDD
pattern ?

dp[i]= dp[i-1]*2

(sum of all subseq till string[1...i-1] + sum of subseq till string[1...i-1] concatenated with character string[i])

There one more case we have to consider

if we have duplicate characters in the string then our subsequence will also be duplicated

To prevent that have a last[ ] array to store position of string[i] which occured before

last[string[i]]= last occurence of string[i]

substract subsequence count occured till position (last[string[i]]-1) since it is repeated again
*/
	getchar();
	while(t--)
	{
		scanf("%s",str);
		len=strlen(str);
		long long ans[len+1];
		int prev[91];
		for(i=65;i<=90;i++)
		prev[i]=0;
		i=1;
		ans[0]=1;
		while(i<=len)
		{
			ans[i]=ans[i-1]*2;
			if(prev[str[i-1]]!=0)
			ans[i]-=ans[prev[str[i-1]]-1];
			prev[str[i-1]]=i;
			if(ans[i] < 0) ans[i] +=1000000007;
		else if(ans[i]>=1000000007)
		ans[i] -=1000000007;
		i++;
		}
	printf("%lld\n",ans[len]);
	}
return 0;
}
