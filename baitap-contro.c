#include "stdio.h"
int main() {
	int a = 100, b = 200;
	int *ptr = &a;
	printf("dia chi cua bien a la: %x\n",  &a);
	printf("dia chi cua bien a la: %p\n",  &a);
	printf("gia tri cua a la : %d\n", *ptr);
	ptr = &b;
	printf("gia tri cua b la: %d", *ptr);
}
