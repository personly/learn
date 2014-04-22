#include <stdio.h>


int main(){
	unsigned int a = 0;
	a = ~a;
	printf("a=%u\n", a);
	a = a>>16;
	printf("a>>=%u\n", a);

return 0;
}
