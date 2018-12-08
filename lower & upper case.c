#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;
	printf("Enter any string : ");
	scanf("%s",str);
	printf("The given string is : %s\n",str);
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=92)
		{
			str[i]=str[i]+32;
			
		}
	}
	printf("The string in lower case is : %s\n",str);
}

