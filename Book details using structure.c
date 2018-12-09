#include<stdio.h>
struct stu
{
	char bo[20];
	float p;
	int pages;
	
}s;
int main()
{
	printf("Enter the book name : ");
	scanf("%s",&s.bo);
	printf("Enter the price of the book : ");
	scanf("%f",&s.p);
	printf("Enter the number of pages in the book : ");
	scanf("%d",&s.pages);
	printf("Book name = %s\n",s.bo);
	printf("Book price = %f\n",s.p);
	printf("Number of pages = %d\n",s.pages);
}