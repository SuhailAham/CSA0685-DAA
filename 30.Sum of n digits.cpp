#include<stdio.h>

int main()
{
	int n,x=0,sum=0,y;
	printf("Enter the number for sum till: ");
	scanf("%d",&n);
	y=n;
	x=n*(n+1);
	sum=x/2;
	printf("Sum of numbers till %d are %d",y,sum);
	return 0;
}
