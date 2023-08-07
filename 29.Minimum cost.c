#include <limits.h>
#include <stdio.h>
int min(int x, int y, int z); 
int minCost(int r,int cost[r][r], int m, int n)
{
    int i, j;
    int tc[r][r];
    tc[0][0] = cost[0][0];
    for (i = 1; i <= m; i++)
    {
    	tc[i][0] = tc[i - 1][0] + cost[i][0];
	}
    for (j = 1; j <= n; j++)
    {
    	tc[0][j] = tc[0][j - 1] + cost[0][j];	
	}
    for (i = 1; i <= m; i++)
    {
    	for (j = 1; j <= n; j++)
    	{
    		tc[i][j] = min(tc[i - 1][j - 1],
                        tc[i - 1][j],
                        tc[i][j - 1])
                    + cost[i][j];	
		}
	}
    return tc[m][n];
}
int min(int x, int y, int z)
{
    if (x < y)
    {
    	return (x < z) ? x : z;	
	}
    else
    {
    	return (y < z) ? y : z;	
	}
}
int main()
{	
	int r,i,j;
	printf("Enter the number of vertices: ");
	scanf("%d",&r);
	int cost[r][r];
 	printf("\nEnter the Cost Matrix: \n");
 	for(i=0;i<r;i++)
	{
 		for( j=0;j<r;j++)
 		{
 			scanf("%d",&cost[i][j]);
		}
	}
    printf("Minimum cost= %d ", minCost(r,cost, 2, 2));
    return 0;
}
