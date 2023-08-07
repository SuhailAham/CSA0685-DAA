#include <stdio.h>
int main() 
{
	int n,i;
  	double arr[1000],max=0;
  	printf("Enter the number of elements: ");
  	scanf("%d", &n);
  	printf("Enter the elements: ");
  	for (i = 0; i < n;i++) 
  	{
    	scanf("%lf", &arr[i]);
  	}
  	max=arr[0];
  	for (i = 1; i < n;i++) 
  	{
    		if (max<arr[i]) 
		{
      			max = arr[i];
    		}
  	}
  	printf("Largest element = %.2lf",max);
  	return 0;
}

