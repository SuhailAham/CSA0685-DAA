#include <stdio.h>
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter the original array: ");
    for (i = 0; i <n; i++)
    {
    	scanf("%d",&arr[i]);		
	}
	printf("Enter the element to be inserted: ");
    scanf("%d",&x);
    printf("Enter the position to be inserted: ");
    scanf("%d",&pos);
  	printf("\nThe original array: \n");
    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);	
	}
    printf("\n");
    n++;
    for (i = n - 1; i >= pos; i--)
    {
    	arr[i] = arr[i - 1];	
	}
    arr[pos - 1] = x;
    printf("\nAarray after insertion: \n");
    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);
	}
    printf("\n");
    return 0;
}
