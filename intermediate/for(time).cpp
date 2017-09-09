#include <stdio.h>
#include <time.h>

int main()
{
	long long int sum = 0;
	time_t s = clock();
	
	for(int i = 1; i < 10000000; i++) sum = sum + i;
	printf("%lld\n", sum);
	time_t e = clock();
	
	printf("result = %.3f (sec)\n", (float)(e-s) / CLOCKS_PER_SEC );
}
