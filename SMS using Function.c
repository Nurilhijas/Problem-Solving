#include <stdio.h>
#include <string.h>
#include "SMS1.c"
int main() {
char s1[100];
	gets(s1);
	replace(s1);
	printf("%s\n", s1);
	return 0;
}

//File Name: SMS1.c
//==================================
void replace(char *s1)
{
	char r[4][10]={"yes","you","today","why"};
	char rep[4][5]={"s","u","2day","y"};
	char buff[500];
	int i;
	char *ch;
	for(i=0;i<4;i++)
	{
		if(ch=strstr(s1,r[i]))
	{	
			strncpy(buff,s1,ch-s1);
			buff[ch-s1]=0;
			sprintf(buff+(ch-s1),"%s%s",rep[i],ch+strlen(r[i]));
			s1[0]=0;
			strcpy(s1,buff);
			return replace(s1);
	}
	}
	}