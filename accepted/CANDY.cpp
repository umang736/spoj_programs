#include<stdio.h>
int main()
{
    int a;
    int arr[10005];
    scanf("%d",&a);
    while(a!=-1)
    {
        int k,temp=0,temp1=0,i;
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
            temp+=arr[i];
        }
        k=temp/a;
        if(temp%a!=0){
            printf("-1\n");
        }
        else
        {
            for(i=0;i<a;i++)
            {
            	if(arr[i]>k)
                temp1+=arr[i]-k;
            }
            printf("%d\n",temp1);
        }
        scanf("%d",&a);
    }
    return 0;
}
