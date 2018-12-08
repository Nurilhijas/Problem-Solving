#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 3 integer numbers : ");
scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is the largest number\n",a);
	}	
	else if(b>a && b>c)
	{
	printf("%d is the largest number\n",b);
	}
	else
{
	printf("%d is the largest number\n",c);
}

	if(a<b && a<c)
	{
		printf("%d is the smallest number\n",a);

}
else if(b<a && b<c)
	{
		printf("%d is the smallest number\n",b);

}		else
{
		printf("%d is the smallest number\n",c);
	
}

}