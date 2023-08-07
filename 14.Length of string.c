#include<stdio.h>
#include<string.h>
int main() 
{
	char str[100];
	printf("Enter a string:");
	scanf("%s", str);
	int len = strlen(str);
	printf("Length of the string is %d",len);
	return 0;
}
