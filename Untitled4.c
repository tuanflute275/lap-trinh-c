#include<stdio.h>

int tinhTong (int a , int b , int c ){
	int tong = a + b + c; 
	printf("Tong la : %d ",tong);
}

int main() {
	int a, b, c;
	printf("\nnhap vao 3 so: ");
	scanf("%d%d%d", &a, &b, &c);
	tinhTong(a, b, c);
}
