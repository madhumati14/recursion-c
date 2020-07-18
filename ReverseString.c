#include<stdio.h>

void ReversString(char *str)
{
	if(*str!='\0')
	{
		ReversString(str+1);
		printf("%c",*str);
	}
}
int main()
{
	char arr[10];

	printf("\nEnter the String = ");
	scanf("%s",arr);

	ReversString(arr);

	return 0;
}
