/*Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD*/

#include<stdio.h>

int countWhiteSpace(char *arr)
{
	static int i=0,count=0;

	if(arr[i]!='\0')
	{
		if(arr[i]==' '||arr[i]=='\0')
		{
			count++;
		}
		i++;
		countWhiteSpace(arr);
	}
	return count;
}
int main()
{
	char arr[29];
	int iRet=0;

	printf("\nEnter the String = ");
	scanf("%[^\n]s",arr);
	
	iRet=countWhiteSpace(arr);
	printf("\nNumber of white spce is = %d\n",iRet);
	return 0;
}
