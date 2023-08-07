#include <stdio.h>
int main()
{
    int n,i,j;
    int a[100];
    int min_index;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
    	for(i = 0; i < n - 1; i++) 
	{
        min_index = i;
        for(j = i + 1; j < n; j++) 
		{
            if(a[min_index] > a[j]) 
			{
                min_index = j;
            }
        }
        if(min_index != i)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++)  
	{
        printf(" %d", a[i]);
    }
    return 0;
}

