#include<stdio.h>

int tinhTong (int a , int b ) {
	int tong = a+b ;
	printf("Tong la : %d",tong);
}

int tinhHieu (int a , int b) {
	int hieu = a-b ;
	printf("\nHieu la : %d",hieu);
}

int tinhTich (int a , int b) {
	int tich = a*b ;
	printf("\nTich la : %d",tich);
}

int main () {
	int a , b ;
	printf("Nhap so a : ");
	scanf("%d",&a);
	printf("Nhap so b : ");
	scanf("%d",&b);

	tinhTong(a,b);
	tinhHieu(a,b);
	tinhTich(a,b);
}
