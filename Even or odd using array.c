#include<stdio.h>
void main()
{
	int a[100],i;
	for(i=1;i<=5;i++)
	{
     scanf("%d",&a[i]);		
	
}
printf("Even array : ");
for(i=1;i<=5;i++)
{
	if(a[i]%2==0)
	{
		printf("%d ",a[i]);
	}
}
printf("\nOdd array : ");
for(i=1;i<=5;i++)
{
	if(a[i]%2!=0)
	{
		printf("%d ",a[i]);
			}
}
printf("\n");
}
