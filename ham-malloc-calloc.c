#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
	int i, j, n, *pa;
	printf("nhap vao so luong phan tu: ");
	scanf("%i", &n);

// su dung ham malloc - cap phat bo nho dong
	pa = (int*)malloc(n*sizeof(int));
//su dung ham calloc- cap phat bo nho dong
//	pa = (int*)calloc(n, sizeof(int));
	if(pa == NULL) {
		printf("\nERROR: khong cap phat duoc vung nho ");
	}
	//nhap mang
	for(i=0; i<n; i++) {
		printf("array[%d]=", i);
		scanf("%i", pa + i);
	}
//xuat mang
	for(i=0; i<n; i++) {
		printf("%d  ", *(pa+i));
	}
//thay doi kich thuoc vung nho
	int t;
	printf("\nSo luong phan tu muon them: ");
	scanf("%d", &t);
	realloc(pa, t);
//nhap xuat mang moi tang so luong
	for(i=0; i<t; i++) {
		printf("array[%d]=", i);
		scanf("%i", pa + i);
	}
	for(i=0; i<t; i++) {
		printf("%d ", *(pa+i));
	}

//giai phong bo nho
	free(pa);

	getch();
}
//// cau truc ham malloc
//int *tn;
////bien con tro = (kieudu lieu *)malloc(kichthuocsoluong * sizeof(kieu du lieu));
//tn = (float*)malloc(10*sizeof(float));
////cau truc ham calloc- gan gia tri bang 0
//tn = (double*)calloc(15,sizeof(double));
////cau truc ham thay doi kich thuoc - realloc
//int x;
////realloc(bien con tro, so luong );
//realloc(tn, x);



