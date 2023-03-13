#include"stdio.h"
int i, j, m, n,option, a[100][100];
//menu bai tap mang hai chieu
int menu() {
	printf("\n-----------MENU-----------\n");
	printf("1. Nhap mang hai chieu\n");
	printf("2. Xuat mang hai chieu\n");
	printf("MOI BAN LUA CHON ...");
//printf("\n\n");
	scanf("%d", &option);
}
//nhap mang 2 chieu
void nhapM(int x[100][100], int m , int n) {
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("x[%d][%d]=",i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
//xuat mang 2 chieu
void xuatM(int x[100][100], int m, int n) {
	printf("\nMang vua nhap: \n");
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
}

int main() {
	do{
	menu();
	switch(option) {
		case 1: {
			printf("  nhap vao m va n : ");
			scanf("%d%d", &m, &n);
			nhapM(a, m, n);
			break;
		}
		case 2: {
			xuatM(a, m, n);
			break;
		}

	}
} while(option != 0);
}
