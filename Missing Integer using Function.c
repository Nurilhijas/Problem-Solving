#include <stdio.h>
#include "MissingInteger1.c"
int main() {
	int n, i, d, sum1;
	sum1 = 0;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) {
		scanf("%d", &d);
		sum1 = sum_1(d, sum1);
	}
	d = n * (n + 1);
	d = d / 2;
	printf("%d\n", d - sum1);
	return 0;
}

//File Name: MissingInteger1.c
//==================================
int sum_1(int d,int sum1)
{
	sum1=sum1+d;
	return sum1;
}