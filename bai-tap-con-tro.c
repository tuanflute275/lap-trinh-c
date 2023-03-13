#include"stdio.h"
int i,j,n;
int *ptr ;
//int a = 5, b = 10;

/*
//truyen tham tri
int swap1(int a, int b) {
	int temp = a;
		a = b;
		b = temp;

	printf("gia tri truoc khi swap 2: a=%d, b=%d\n", a, b);
	swap2(&a, &b);
	printf("gia tri sau khi swap 2:   a=%d, b=%d", a, b);
}
// con tro ham
int swap2(int *a, int *b) {
	int temp = *a;
		*a = *b;
		*b = temp;

	printf("gia tri truoc khi swap 1: a=%d, b=%d\n", a, b);
	swap1(a, b);
	printf("gia tri sau khi swap 1:   a=%d, b=%d\n", a, b);
}*/

/*
int volume(int *x) {
	*x= (*x)*(*x)*(*x);
}*/
int main() {

	printf("nhap so luong phan tu: ");
	scanf("%d", &n);

//	ptr = (int*)malloc(n*sizeof(int));
	ptr = (int*)calloc(n,sizeof(int));
	if(ptr == NULL) {
		printf("\nERROR : khong cap phat duoc vung nho ");
	}
	for(i=0; i<n; i++) {
		printf("a[%d]=", i);
		scanf("%d", ptr + i);
	}
	for(i=0; i<n; i++) {
		printf("%d  ", *(ptr + i));
	}
	int v;
	printf("\nKich thuoc muon thay doi la: ");
	scanf("%d", &v);
	realloc(ptr, v);
		for(i=0; i<n; i++) {
		printf("a[%d]=", i);
		scanf("%d", ptr + i);
	}
	for(i=0; i<n; i++) {
		printf("%d  ", *(ptr + i));
	}
	

	free(ptr);

	/*
	for( i = 0;  i < 5; i++) {
		printf("a[%d]: ", i);
		scanf("%d", ptr+i);
	}

	printf("\n gia tri cua mang la: ");
	for(i = 0; i < 5; i++) {
		printf("%3d", *(ptr+i));
	}

	printf("\n gia tri cua mang la: ");
	for(; ptr <= &a[4]; ptr++) {
		printf("%3d", *ptr);
	}*/
	/*	int x=5;
		printf("gia tri cua x: %d\n", x);
		volume(&x);
		printf("gia tri cua x qua volume: %d", x);*/

}

