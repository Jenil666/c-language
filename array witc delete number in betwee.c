#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i,tem,pos,num;
	printf("Enter the position: ");
	scanf("%d",&pos);
	
	printf("Before: \n");
	for(i=0;i<10; i++)
	{
		printf("%d \t",a[i]);
	}
	for(i=0;i<10; i++)
	{
		if(i>=pos-1)
		{
			a[i]=a[i+1];
		}
	}
	a[9]=0;
	printf("\n");
	printf("After: \n");
	for(i=0;i<9; i++)
	{
		printf("%d \t",a[i]);
	}
	return 0;
}
