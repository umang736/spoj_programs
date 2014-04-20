#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *lchild;
	int info;
	struct node *rchild;
};	 
main( )
{
	struct node *ptr,*par=NULL,*root=NULL;
	int ikey,n;
	unsigned long long ans=0;
scanf("%d",&n);
	scanf("%d",&ikey);
	ptr=(struct node *)malloc(sizeof(struct node));
    ptr->info=ikey;
    ptr->lchild=NULL;
    ptr->rchild=NULL;
    if(par==NULL)
    {
		root=ptr;
    }
	n--;
	while(n--)
	{
	scanf("%d",&ikey);
	par=NULL;
	ptr=root;
	printf("root =%d\n",root->info);
	while(ptr!=NULL)
	{
	par=ptr;
	if(ikey<(ptr->info))
	{
	ptr=ptr->lchild;ans++;
	printf("left ptr->info=%d ans=%lld\n",ptr->info,ans);
    }
	else
	{
		ans++;
		printf("right ptr->info=%d ans=%lld\n",ptr->info,ans);
	ptr=ptr->rchild;
    }
    }
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->info=ikey;
    ptr->lchild=NULL;
    ptr->rchild=NULL;
    if(par==NULL)
    {
		root=ptr;
    }
    else if(par->lchild==NULL)
    {
	par->lchild=ptr;
    	printf("left ptr->info=%d ans=%lld\n",ptr->info,ans);
	}
	else
	{
			printf("right ptr->info=%d ans=%lld\n",ptr->info,ans);
    par->rchild=ptr;
    }
printf("%lld\n",ans);
	}/*End of while */
	return 0;
}/*End of main( )*/
