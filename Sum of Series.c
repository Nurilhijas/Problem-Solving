#include<stdio.h>
void main()
{
	int a,i;
	long sum=0;
	long int r=1;

	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+r;
		r=(r*10)+1;
		
		
	}
	printf("%ld\n",sum);
}