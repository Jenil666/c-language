#include<stdio.h>
int main()
{
	int a[100],n,x,i;
	printf("Enter number of data: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0; i<n; i++)
	{
	   printf("Enter %d Array: ",i+1);
	   scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
	   printf("%d \t",a[i]);
	}
	printf("\n");
	printf("Enter number to see position: ");
	scanf("%d",&x);
	for(i=0; i<n; i++)
	{
		if(x==a[i])
		{
			printf("It is at %d position",i+1);
		}
	}
	return 0;
}
