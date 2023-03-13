#include<stdio.h>

int tinhTong (int a , int b , int c ){
	int tong = a + b + c; 
	printf("\nTong la : %d ",tong);
}

int tinhHieu (int a , int b , int c ){
	int hieu = a - b - c ; 
	printf("\nHieu la : %d ",hieu);
}

int tinhTich (int a , int b , int c ){
	int tich = a * b * c; 
	printf("\nTich la : %d ",tich);
}

void main(){
	int a , b , c ;
	printf("\nnhap vao 3so: ");
	scanf("%d%d%d", &a, &b, &c);
	
	tinhHieu(a,b,c);
	tinhTich(a,b,c);
	tinhTong(a,b,c);
}
