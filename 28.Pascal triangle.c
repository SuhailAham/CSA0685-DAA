#include <stdio.h>
void printPascal(int n)
{
	int j,i,k;
    	for (i = 1; i <= n; i++) 
	{
        	for (k=1;k<=n-i;k++)
        	{
        		printf("  ");	
		}
        int coef = 1;
        for (j = 1; j <= i; j++) 
		{
            printf("%4d", coef);
            coef = coef * (i - j) / j;
        }
        printf("\n");
    }
}
  
// Driver code
int main()
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printPascal(n);
    return 0;
}
