#include<stdio.h>
#include<conio.h>
main()
{
 char str[1001],a,b,c;
 scanf("%s",str);
 getchar();
 scanf("%c",&a);
 getchar();
 scanf("%c",&b);
 getchar();
 int i;
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]==a)
 str[i]=b;
 }printf("%s\n",str);
 return 0;	
}
//this method also works
/*#include<stdio.h>
#include<conio.h>
main()
{
 char str[1001],a,b,c;
 scanf("%s",str);
 getchar();
 scanf("%c %c",&a,&b);
 int i;
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]==a)
 str[i]=b;
 }printf("%s\n",str);
 return 0;	
}
*/
