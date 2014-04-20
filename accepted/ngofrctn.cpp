#include <stdio.h>
#include <math.h>

int main()
{
   while(1)
   {
      long long int number;
      scanf("%lld", &number);
      
      if(number == 0)
         break;

      int level = log2(number);   //calculating the levels in tree
      long long int path[35];//maximum levels +1 as 2^34>10000000000,+1 for 1(root)
      int count = 0;
      if(number==1)
      {
      	printf("1/1\n");
      	continue;
      }
    path[count] = number;
         count++;
      while(1)            //storing the path toward root
      {
      	 path[count] = path[count-1] /2;//=number and number=number/2
      	if(path[count] == 1)
               break;
               count++;
      }      

      int i, n = 1, d = 1;
      for(i = count-1; i >= 0; i--)      //traversing the path and caluclating accordingly
      {
         if((path[i]/2)*2 == path[i]) //even
         {
            d = n+d;
         }
         else   //odd
         {
            n = n+d;
         }
      }
      printf("%d/%d\n", n, d);
   }
   return 0;
}
