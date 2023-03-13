#include"stdio.h"
#include "stdlib.h"

int main() {
	FILE *p;
	p = fopen("Bai_tap_file", "r");
	//doc du lieu
	char ten[50];
	fscanf(p, "%s", ten);
	printf("%s", ten);
	fclose(p);
}
