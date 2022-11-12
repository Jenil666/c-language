#include<stdio.h>
int main ()
{
	int a[2][5]={{1,2,3,4,5},{6,7,8,9,10}},i,j,col,num,row;
	printf("Before Data: \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Row: \n");
	scanf("%d",&row);
	printf("Enter Column: \n");
	scanf("%d",&col);
	printf("Enter Number: \n");
	scanf("%d",&num);
	for(i=0; i<2; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==row-1 && j==col-1)
			{
				a[i][j]=num;
			}
		}
	
	}
	printf("After: \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
