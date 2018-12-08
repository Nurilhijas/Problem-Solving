#include<stdio.h>
int main()
{
	int n,i,j,a[100],b[100];
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Array elements in reverse order : ");
	for(i=n-1;i>=0;i--)
	{
		b[j]=b[i];
		
	
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
