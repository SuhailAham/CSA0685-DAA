#include <stdio.h>
#include <string.h>
int main() 
{
	char str[100];
	int i,j;//start=i=0 and end=j=len-1
	printf("Enter a string:");
	scanf("%s", str);
	int len = strlen(str);
	for(i=0, j=len-1; i<j; i++,j--) 
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;       
	}
	printf("The reverse of the string is \"%s\".\n", str);
	return 0;
}
