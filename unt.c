#include "stdio.h"
int i, j, a[100][100], n;
int main() {
	printf("Nhap so canh cua ma tran vuong la:");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf("a[%d][%d]= ",i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Phan tu cua mang la: ");
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf("\n%d\n", *(*(a+i)+j));
		}
	}

	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (i==0 && j==0 || i==n-1 && j==0 || i==0 && j== n-1 || i==n-1 && j==n-1) {
				printf("%4d", a[i][j]);
			} else {
				printf("         ");
			}
		}
		printf("\n\n");
	}

	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (i==0 && j==0 || i==n-1 && j==0 || i==0 && j== n-1 || i==n-1 && j==n-1) {
				printf("%4d", a[i][j]);
				int ton1= 0;
				ton1 = ;
				printf("\ntong= %d ", ton1);
			}
		}
	}



//		int max = a[0][0], min = a[0][0];
//				for (i=0; i<n; i++) {
//					for (j=0; j<n; j++) {
//						if (max < a[i][j])
//							max = a[i][j];
//
//						if(min > a[i][j])
//							min = a[i][j];
//					}
//					printf("\n");
//				}
//				printf("\nMAX = %d , MIN = %d", max, min);
//
//	// tinh tong giua khoang
//	int tong = 0;
//	for(i=min+1; i<max; i++) {
//		tong += i;
//		printf("\nTong giua khoang la: %d", tong);
//	}


			}
