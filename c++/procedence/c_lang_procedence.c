#include <stdio.h>

#define CH 0xa

int main(void)
{
	printf("CH:%d\n", CH);
	int a = 1;
	int b = a<<CH;
	printf("a<<CH: %d\n", b);
	int c = a<<2<<CH;
	printf("1<<a<<CH: %d\n", c);

	return 0;
}
