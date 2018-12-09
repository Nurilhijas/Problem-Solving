#include<stdio.h>
struct dist
{
	int f;
	int in;
	
}c,d,sumd;
int main()
{
	scanf("%d",&c.f);
	scanf("%d",&c.in);
	scanf("%d",&d.f);
	scanf("%d",&d.in);
	sumd.f=c.f+d.f;
	sumd.in=c.in+d.in;
	if(sumd.in>=12.0)
	{
		sumd.in=sumd.in-12.0;
		++sumd.f;
		
	}
	printf("Sum of distances = %d feet %d inches\n",sumd.f,sumd.in);
	return 0;
}
