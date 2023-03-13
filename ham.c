#include"stdio.h"
int i, j,m, n, a[100][100];
int main() {
	printf("nhap vao so cot va so dong : ");
	scanf("%d%d", &m, &n);
	for(i=0; i<m;i++) {
		for(j=0; j<n ;j++){
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
			
		}
	}
	for(i=0; i<m;i++) {
		for(j=0; j<n ;j++){
			printf("%2d", a[i][j]);
		}
	}
	
	
	
	/*printf("nhap so luong phan tu : ");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++) {
		printf("%2d", a[i]);
	}*/
}
