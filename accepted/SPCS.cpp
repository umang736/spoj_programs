#include<stdio.h>
#include<string.h>
main()
{
short t;
int i,j,temp;
char str[100001],str2[100001];	
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%s",str);
j=0;
for(i=0;str[i];i++)
{
	while(str[i+1]==str[i])
	i++;
str2[j++]=str[i];
}
str2[j]='\0';
temp=strlen(str2)-1;
for(i=0;i<temp;i++)
if(str2[i]!=str2[temp-i])
break;
	if(i>=temp)
	printf("YES\n");
	else
		printf("NO\n");

	}
	return 0;
}
/*
4
 

Just compress all groups of adjacent characters into 1 character and see if the resulting string is a palindrome. e.g. "aaabbccccbbbaa" -> "abcba" which is a palindrome.

Proof:
If this works, we have found a sequence of "cool operations" to make the string a palindrome, as required.
If this doesn't work, then the string didn't have the required "form" to be a palindrome in the first place; we can't alter the order of groups, only their sizes
*/



