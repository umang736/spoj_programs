#include<stdio.h>
#include<stdlib.h>
short maxSumIS( short arr[], short n )
{
   short *msis, *c, i, j, max = 1;
   msis = (short*) malloc ( sizeof( short ) * n );
 c=(short*)malloc(sizeof(short)*n);
   /* Initialize msis values for all indexes */
   for ( i = 0; i < n; i++ )
   {
      msis[i] = arr[i];
      c[i]=1;
   }
   /* Compute maximum sum values in bottom up manner */
   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i] > arr[j] && msis[i] < msis[j] + arr[i] )
			{
			msis[i] = msis[j] + arr[i];c[i]=c[j]+1;
            }
   /* Pick maximum of all msis values */
   for ( i = 0; i < n; i++ )
      if ( max < c[i] )
         max = c[i];
 
   /* Free memory to avoid memory leak */
   free( msis );
    free(c);
   return max;
}
main()
{
	short n,i;
scanf("%hd",&n);	
short arr[n];
for(i=0;i<n;i++)
scanf("%hd",&arr[i]);
	printf("%hd",maxSumIS(arr,n));
	return 0;
}
