#include<stdio.h>
#define INF 999
void floyd(int a[4][4], int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]>a[i][k]+a[k][j])
				{
					a[i][j]=a[i][k]+a[k][j];
				}
		    	}
	    	}
	}
	printf("All Pairs Shortest Path is :\n");
		for(i=0;i<n;i++)
	    {
	    	for(j=0;j<n;j++)
	    	{
	    		if(a[i][j]==INF)
	    		{
	    			printf("%5s", "INF");
				}
				else
				{
					printf("%4d ",a[i][j]);
				}
			}
	    	printf("\n");
		}
}
int main()
{
	int n,i,j;
	printf("Enter the number of vertices: ");
	scanf("%d",&n);
	int cost[n][n];
	printf("\nIf the cost is infinite enter 999\n");
 	printf("\nEnter the Cost Matrix: \n");
 	for(i=0;i<n;i++)
	{
 		for( j=0;j <n;j++)
 		{
 			scanf("%d",&cost[i][j]);
		}
	}
	floyd(cost,n);
}
