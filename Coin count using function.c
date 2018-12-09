#include <stdio.h>
#include "CoinCounting1.c"
int main() {
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int arr[] = {1, 3, 5};
	int m = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++) {
		printf("%d\n", count(arr, m, a[i]));
	}
	return 0;
}

//File Name: CoinCounting1.c
//==================================
int count(int s[],int m,int n)
{
	if(n==0)
	return 1;
	if(n<0)
	return 0;
	if(m<=0 && n>=1)
	return 0;
	return count(s,m-1,n)+count(s,m,n-s[m-1]);
}
