/* Program for creating a minimum spanning tree by Kruskal's algorithm */
#include<stdio.h>
#include<stdlib.h>
#define NIL -1

struct edge
{
	int u;
	int v;
	int weight;
};

void merge_sort(struct edge tree1[],int s,int m,int e)
{
	int n=e-s+1,s1=s,e1=e;
	int i=0,k=m+1;
	struct edge c[n];
	while(s<=m&&k<=e)
	{
		if(tree1[s].weight<tree1[k].weight)
		c[i++]=tree1[s++];
		else
		c[i++]=tree1[k++];
	}
	while(s<=m)
	{	
		c[i++]=tree1[s++];
	}
	while(k<=e)
	{
		c[i++]=tree1[k++];
	}
	for(i=0;i<n;i++)
	tree1[s1++]=c[i];
}

void brk_comb(struct edge tree1[],int s,int e)
{
	if(s==e)
	return ;
	int m=(s+e)/2;
	brk_comb(tree1,s,m);
	brk_comb(tree1,m+1,e);
	merge_sort(tree1,s,m,e);
}

int n;   /*Total number of vertices in the graph */

main()
{	
int i,max_edges;
	scanf("%d %d",&n,&max_edges);
	struct edge tree1[max_edges],tree[n]; /* Will contain the edges of spanning tree */
	for(i=0;i<max_edges;i++)
    {
		scanf("%d %d %d",&tree1[i].u,&tree1[i].v,&tree1[i].weight);
	}
	brk_comb(tree1,0,max_edges-1);
	int v1,v2,root_v1,root_v2;
	int father[n+1], count=0;
	long long wt_tree = 0; /* Weight of the spanning tree */
		for(i=1; i<=n; i++)
		father[i] = NIL;
		i=0;
		while(i<max_edges && count < n-1 ) 
	{
		v1 = tree1[i].u;
		v2 = tree1[i].v;
		root_v1 = v1;
		v1 = father[v1];
		while(v1!=NIL)
		{
			root_v1 = v1;
			v1 = father[v1];
		}
			root_v2 = v2;
			v2 = father[v2];
		while(v2!=NIL)
		{
			root_v2 = v2;
			v2 = father[v2];
		}
		if( root_v1 != root_v2 )/*Insert the edge (v1, v2)*/
		{
		    count++;
			tree[count].u = tree1[i].u;
			tree[count].v = tree1[i].v;
			tree[count].weight = tree1[i].weight;
			father[root_v2] = root_v1;
        }
		i++;	
	}

	for(i=1; i<=n-1; i++)
	{
		wt_tree += tree[i].weight;
	}
	printf("%lld\n", wt_tree);
return 0;
}/*End of main()*/
