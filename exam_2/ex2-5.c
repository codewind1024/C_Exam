#include <stdio.h>

int main()
{
	unsigned long long n = 1;
	for (unsigned long long i = 1; i <= 91; i += 3)
	{
		n = n * i;
		printf("%lld\n", n);
	}
	printf("1*4*7*...*91=%lld\n", n);
	return 0;
}
