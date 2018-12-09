#include <stdio.h>
#include "CoPrime1.c"
int main() {
	int n, i, d, count;
	count = 1;
	scanf("%d", &n);
	for (i = 2; i < n; i++)	{
		d = gcd(n, i);
		if (d == 1)
			count += 1;
	}
	printf("%d\n", count);
	return 0;
}

//File Name: CoPrime1.c
//==================================
int gcd(int a,int b)
{
	int t;
	while(b!=0)
	{
		if(a<b)
		{
			t=a;
			a=b;
			b=t;
			
		}
		t=a;
		a=b;
		b=t%b;
		gcd(a,b);
	}
	return a;
}
