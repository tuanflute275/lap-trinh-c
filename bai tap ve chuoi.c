#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//ham tinh do dai chuoi
int my_strlen(char x[]) {
	int count = 0;
	while(x[count] != '\0') {
		count++;
	}
	return count++;
}
//// ham xoa xuong dong
//void xoaXuongDong(char x[]) {
//	int i;
//	size_t len = strlen(x);
//	for(i=0; i<len; i++) {
//		if(x[len-1]=='\n') {
//			x[len-1]='\0';
//		}
//	}
//}
// ham viet chu hoa
//void my_strupr(char x[]) {
//	int i;
////	size_t len = strlen(x);
//	for(i=0; i<strlen(x); i++) {
//		if(x[i] >= 97 && x[i] <= 122) {
//			x[i] = x[i]-32;
//		}
//	}
//}
//ham viet thuong 
//void my_strlwr(char x[]) {
//	int i;
//	for(i=0; i<strlen(x); i++) {
//		if(x[i] >= 65 && x[i] <= 90) {
//			x[i] = x[i]+32;
//		}
//	}
//}
// ham chu cai dau viet hoa
//void chuCaiDau(char x[]) {
//	int i;
//	for(i=0; i<strlen(x); i++) {
//		if(i==0 || i>0 && x[i-1]==32) {
//			if(x[i] >=97 && x[i] <= 122) {
//				x[i] = x[i] - 32;
//			}
//		}else{
//			if(x[i] >=65 && x[i] <= 90) {
//				x[i] = x[i] + 32;
//			}
//		}
//	}
//}

//
void xoaXuongDong(char x[]) {
	int i;
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n') {
			x[len-1]='\0';
		}
	}
}
int main() {
	char chuoi[50];
	char chuoi_con[50];
	printf("nhap chuoi:  ");
	fgets(chuoi, sizeof(chuoi), stdin);
	xoaXuongDong(chuoi);
	printf("nhap chuoi can tim:  ");
	fgets(chuoi_con, sizeof(chuoi_con), stdin);
	xoaXuongDong(chuoi_con);
	printf("\ndo dai my_strlen: %d", my_strlen(chuoi));
	
//	int* p = strchr(chuoi, 'f');
//	printf("\ntim kiem ki tu : %s", p);
	
	int* kq = strstr(chuoi, chuoi_con);
	printf("\nchuoi can tim la: %s", kq);
	
	
	
//	my_strupr(ten);
//	printf("\nchu hoa   : %s", ten);
//	my_strlwr(ten);
//	printf("\nchu thuong: %s", ten);
//	
//	chuCaiDau(ten);
//	printf("\nviet hoa chu cai dau: %s", ten);

//	char s1[50]="tuan ";
//	char s2[50]="flute";
//	printf("\ns1 = %s", s1);
//	printf("\ns2 = %s", s2);

//	printf("\nketqua so sanh: %d", 	strcmp(s1,s2));
//	strupr(s1);
//	strupr(s2);
//	my_strlen(s1);
//	printf("\ns1 = %s", s1);
//	printf("\ns2 = %s", s2);

//	char ten[50];
//	printf("nhap vao ten cua ban: ");
//	fgets(ten, sizeof(ten), stdin);
//	xoaXuongDong(ten);
//	printf("ten vua nhap la: %s", ten);
//
//	printf("\ndo dai my_strlen: %d", my_strlen(ten));
//	printf("\ndo dai cua chuoi la: %d", strlen(ten));


	getch();
}


