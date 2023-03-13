#include"stdio.h"

int main(){
	int *p, n ;
	char ten[20];
	//b1: mo hoac tao file
	p = fopen("bai_on_tap_file", "w");
	//b2: thuc hien chuc nang
	printf("nhap so:");
	scanf("%d", &n);
	//b3
	fprintf(p, "%d", n);
	//b4: dong 
	fclose(p);
	
}
