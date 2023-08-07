#include <stdio.h>
int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
	int i,j,a=0,x,n;
  	printf("For Binary search array should be in sorted form\n");
  	printf("Enter size of the array : ");
    scanf("%d",&n);
    int array[n];
	printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
  	printf("Enter the value to be searched in array : ");
    scanf("%d",&x);
  	for (i = 0; i < n;i++)
  	{
   		for (j = i + 1; j < n; j++)
		{
      		if (array[i] > array[j])
			{
         		a = array[i];
         		array[i] = array[j];
        		array[j] = a;
      		}
   		}
	}
	printf("\nSorted Array : \n");
	for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
  	int result = binarySearch(array, x, 0, n - 1);
  	if (result == -1)
    	printf("\nElement Not found");
  	else
    	printf("\nElement is found at index %d", result+1);
}
