#include"stdio.h"
#include"stdlib.h"

int main() {
	FILE *p;
	p= fopen("bai_file_005.txt", "w");
	if(p == NULL) {
		printf("\nLoi tao file !");
		return;
	}
	int n;
	scanf("%d", &n);
	fprintf(p, "%d",n );
	
	fclose(p);
}
