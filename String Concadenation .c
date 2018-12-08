#include<stdio.h>
void main()
{
	
	char a[100],b[100],c[100];
	printf("Enter the first string : ");
	scanf("%s",&a);
	printf("Enter the second string : ");
	scanf("%s",&b);
int i=0,n;
while(a[i]!='\0')
{
	c[i]=a[i];
	i++;
}
n=i;
i=0;
while(b[i]!='\0')
{
	c[n]=b[i];
	n++;
	i++;
}
c[n]='\0';
printf("The concatenated string = %s\n",c);
}
