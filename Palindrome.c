#include<stdio.h>
void main()
{
char a[10],b[10];
int i=0,n=0,p=0,flag=1;
printf("Enter a string : ");
gets(a);
while(a[i]!='\0')
{
	i++;
	p++;
}
b[i]='\0';
i=i-1;
while(a[n]!='\0')
{
	b[i]=a[n];
	n++;
	i--;
}
for(i=0;i<p;i++)
{
	if(a[i]!=b[i])
	{
		flag=0;
	}
}

	if(flag==1)
{	
	printf("The given string %s is a palindrome\n",a);
}
	else
{
	printf("The given string %s is not a palindrome\n",a);
}
}
