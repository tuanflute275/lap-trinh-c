#include"stdio.h"
#include"stdlib.h"

int main() {
	FILE *p;
	// mo hpac tao tep 
	p = fopen("Bai_tap_file", "w");
	//doc va ghi tep
	char ten[50];
	printf("nhap vao ten: ");
	fgets(ten, sizeof(ten),stdin);
	fprintf(p, "%s", ten);
	
	// dong tep
	fclose(p);
}
