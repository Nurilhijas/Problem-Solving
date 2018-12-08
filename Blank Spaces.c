#include<stdio.h>
void main()
{
	char str[50];
	int i=0,count=0;

	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("Number of blank space = %d\n",count);
}