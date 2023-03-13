#include"stdio.h"
#include"string.h"

int main() {
	char x1[50], x2[50], *p;
	printf("\nNhap vao chuoi cua ban: ");
	gets(x1);
	printf("\nNhap vao chuoi can tim: ");
	gets(x2);
	p = strstr(x1, x2);
	printf("\nKet Qua: %s", strstr(x1, x2));

}
