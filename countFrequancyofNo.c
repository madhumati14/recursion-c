#include<stdio.h>

int CountFreq(int *ptr,int isize,int ino)
{
	static int i=0,count=0;
	
	if(i<isize)
	{
		if(ptr[i]==ino)
		{
			count++;
		}
		i++;
		CountFreq(ptr,isize,ino);
	}
	return count;
}
int main()
{
	int isize;
	int *ptr;
	int iRet=0,ino;
	
	printf("\nEnter No of element = ");
	scanf("%d",&isize);
	
	printf("\nEnter the Number ino = ");
	scanf("%d",&ino);

	for(int i=0;i<isize;i++)
	{
		printf("ptr[%d] = ",i);
		scanf("%d",&ptr[i]);
	}
	
	iRet=CountFreq(ptr,isize,ino);
	
	printf("\nFrequancy of %d = %d",ino,iRet);
}
