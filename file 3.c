#include"stdio.h"
#include"stdlib.h"

int main() {
	FILE *tn;
	tn  = fopen("Bai_tap_ve file_005","w");
	int a;
	printf("\nnhap so bat ki: "); scanf("%d", &a);

	printf("%d ", a);
	fprintf(tn, "%d", a);
	
	fclose(tn);
	
}
