#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{
	int i;
    if (n == 1 || n == 0)
    {
    	return false;
	}
    for (i = 2; i <= n / 2; i++) 
	{
     	if (n % i == 0)
     	{
     		return false;	
		}
    }
    return true;
}
int main()
{
    int N;
	int i;
	printf ("\nEnter the number to print prime till: ");
 	scanf ("%d",&N);
    for (i = 1; i <= N; i++) 
	{
        if (isPrime(i)) 
		{
            printf("%d ", i);
        }
    }
    return 0;
}
