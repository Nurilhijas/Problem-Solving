#include <stdio.h>
#include "LCM1.c"
int main() {
	int a, d, i, n;
	scanf("%d", &n);
	scanf("%d", &a);
	d = a;
	for (i = 1; i < n; i++)	{
		scanf("%d", &a);
		d = lcm(d, a);
	}
	printf("%d\n", d);
	return 0;
}

//File Name: LCM1.c
//==================================
int lcm(int a,int b)
{
int an;
an=(a>b)?a:b;
while(1)
{
	if(an%a==0 && an%b==0)
	{
		return an;
		break;
	}
	++an;
}
return 0;
}