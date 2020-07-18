

#include<stdio.h>

int maxDigit(int iNo)
{
	int iDigit=0;
	static int iMax=0;

	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
		maxDigit(iNo);
	}
	return iMax;
}
int main()
{
	int iNo=0,iRet=0;

	printf("\nEnter the number = ");
	scanf("%d",&iNo);

	iRet=maxDigit(iNo);
	
	printf("\nMax Digit = %d",iRet);

	return 0;
}
