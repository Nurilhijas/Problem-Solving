#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter two integer values : ");
	scanf("%d%d",&a,&b);
printf("Before swapping the values are a = %d, b = %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping the values are a = %d, b = %d\n",a,b);
}
