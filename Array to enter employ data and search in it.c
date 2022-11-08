#include<stdio.h>
int main()
{
	int i,n,x,a[50],b;
	printf("How many data you want to enter: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("Enter data: ");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
        printf("%d\t",a[i]);
	}
	printf("\n");
	printf("Enyer number to see detail: ");
	scanf("%d",&x);
	printf("\n");
	for(i=0; i<n; i++)
	{
        if(x==a[i])
        {
        	printf("The %d is at %d position",x,i+1);
        	b=1;
        	break;
		}
	}
	printf("\n");
	if(b!=1)
	{
		printf("Enter valid data!!!");
	}
	return 0;
}