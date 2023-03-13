#include"stdio.h"
#include"stdlib.h"

int main() {
	FILE *tn;
	tn = fopen("Bai_tap_ve file_005", "r");
	if(tn = NULL){
		printf("\n loi tao hoac mo file!");
		exit(1);
	}
	int a;
	fscanf(tn, "%d", a);
	printf("%d", a);
	fclose(tn);
}
