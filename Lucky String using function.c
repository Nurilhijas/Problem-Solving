#include <stdio.h>
#include<string.h>
#include "LuckyString1.c"

int main() {
	char s[100], c;
	printf("Enter the input string : ");
	scanf("%s", s);
	c = checkLucky(s);
	if (c == 1)
		printf("%s is lucky\n", s);
	else if (c == 0)
		printf("%s is not lucky\n", s);
	return 0;
}

//File Name: LuckyString1.c
//==================================
int checkLucky(char s[100])
{
	int sum=0,len,i;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		sum=sum+s[i];
	}
	if(sum%2==0)
	return 1;
	else
	return 0;
}

