#include<stdio.h>
void main ()
{
	int i,n,a[50],x;
	printf("Enter the number of data: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("Enter data: ");
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Before \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);	
	}
	printf("\n");
	printf("Enter number to see position: ");
	scanf("%d",&x);
	printf("\n");
     for(i=0; i<n; i++)
	{
		if(x==a[i])
		{
			printf("The %d is at %d position",x,i+1);
		}
	} 
	return 0;
}