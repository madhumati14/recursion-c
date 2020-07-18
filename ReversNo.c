

#include<stdio.h>

int reverseNo(int ino)
{
	static int sum=0;
	int iDigit=0;
	
	if(ino!=0)
	{
		iDigit=ino%10;
		sum=(sum*10)+iDigit;
		ino=ino/10;
		reverseNo(ino);
	}
	return sum;
}

int main()
{
	int ino=0,iRet=0;
	printf("\nEnter the number = ");
	scanf("%d",&ino);

	iRet=reverseNo(ino);

	printf("Revese no = %d",iRet);
	return 0;
}
