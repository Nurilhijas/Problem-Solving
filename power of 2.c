#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPowerOfTwo(int a)
{
	return(ceil(log2(a))==floor(log2(a)));
}
int main()
{
	int n;
	scanf("%d",&n);
	if(isPowerOfTwo(n))
	{
		printf("%d is a number that can be expressed as power of 2.\n",n);
	}
	else
	{
		printf("%d cannot be expressed as power of 2.\n",n);
	}
}
