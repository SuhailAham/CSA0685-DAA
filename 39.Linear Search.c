#include <stdio.h>  
int linearSearch(int a[], int n, int val) 
{   
	int i;
  	for (i = 0; i < n; i++)  
    	{  
        	if (a[i] == val)  
        		return i+1;  
    	}  
  	return -1;  
}  
int main() 
{  
	int n,i,j,val;
  	printf("Enter size of the array : ");
    scanf("%d",&n);
    int a[n];
	printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
  	printf("Enter the value to be searched in array : ");
    scanf("%d",&val);
  	int res = linearSearch(a, n, val);  
  	printf("\nThe elements of the array are: \n");  
  	for (i = 0; i < n; i++)  
  	{
  		printf("%d ", a[i]);	
	}   
  	printf("\nElement to be searched is %d\n",val);  
  	if (res == -1) 
	{
	  printf("\nElement is not present in the array\n");	
	}   
  	else 
	{
	  	printf("\nElement is present at %d position of array", res);
	} 	  
  	return 0;  
}  
