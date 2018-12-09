#include<stdio.h>
struct avd
{
	int r;
	int m1;
	int m2;
	int m3;
	int t;
	float avg;
}s;
int main()
{
	float b=3.00000;
	printf("Enter regdno, three subjects marks : ");
	scanf("%d%d%d%d",&s.r,&s.m1,&s.m2,&s.m3);
	printf("Student regdno = %d\n",s.r);
    s.t=s.m1+s.m2+s.m3;
    
	printf("Total marks = %d\n",s.t);
	s.avg=(s.m1+s.m2+s.m3)/b;
	printf("Average marks = %f\n",s.avg);
}