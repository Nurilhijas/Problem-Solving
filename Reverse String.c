#include<stdio.h>
void main()
{
	char a[20],b[20];
	int i=0,n=0;
	printf("Enter a string : ");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		i++;
	}
	b[i]='\0';
	i=i-1;
	while(a[n]!='\0')
	{
		b[i]=a[n];
		n++;
		i--;
	}
	printf("The reverse of a given string : ");
	puts(b);
}