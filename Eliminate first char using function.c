#include<stdio.h>
int main()
{
	char ip[100],fp[100];
	int i,j=0;
	printf("Enter a sentence : ");
	gets(ip);
	printf("The given input sentence is : %s\n",ip);
	

	for(i=1;ip[i]!='\0';i++)
	{
	fp[j]=ip[i];
	if(ip[i]==' ' && ip[i+1]!=' ')
	{
		i++;
	}
	j++;
}

printf("The sentance after eliminating first character of each word : %s\n",fp);
return 0;
	}