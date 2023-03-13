#include "stdio.h"
#include "string.h"
// ham tim do dai chuoi
//int my_strlen(char x[]) {
//	int count = 0;
//	while(x[count] != '\0') {
//		count++;
//	}
//	return count++;
//}
//
//// ham xoa xuong dong
//void xoaXuongDong(char x[]) {
//	size_t len = strlen(x);
//	//TUAN\n\0 ==> TUAN\0\0
//	if(x[len-1] == '\n') {
//		x[len-1]='\0';
//	}
//}


// noi  hai chuoi
//void my_strcat(char x1[], char x2[]){
//	size_t len1 = strlen(x1);
//	size_t len2 = strlen(x2);
//
//	// x1 = "Xin chao "
//	// x2 = "TUAN"
//	// => "Xin chao TUAN\0"
//
//	for(int i=len1; i<len1+len2; i++){
//		x1[i]= x2[i-len1]; // ??
//	}
//	x1[len1+len2]='\0';
//
//}


// ham copy chuoi
//void my_strcpy(char x1[], char x2[]) {
//	int i;
//	size_t len2 = strlen(x2);
//	for (i=0; i<len2; i++) {
//		x1[i] = x2[i];
//	}
//	x1[len2] = '\0';
//}

//// ham strupr() dung de chuyen thanh chu HOA       capitalize letter
//void my_strupr(char x[]) {
//	int i;
//	for(i=0; i<strlen(x); i++) {
//		if(x[i] >= 97  && x[i <= 122]) {
//			x[i] = x[i]- 32;
//		}
//	}
//}
//
//// ham strlwr() dung de chuyen thanh chu  thuong      lowercase letters
//void my_strlwr(char x[]) {
//	int i;
//	for(i=0; i<strlen(x); i++) {
//		if(x[i] >= 65  && x[i <= 90]) {
//			x[i] = x[i] + 32;
//		}
//	}
//}

// ham viet hoa chu cai dau tien

//void vietHoaChuDau(char x[]) {
//	int i;
//	for(i=0; i<strlen(x); i++ ) {
//		if(i==0 || i>0 && x[i-1]==32){
//			if(x[i] >= 97 && x[i] <= 122) {
//				x[i] = x[i] - 32;
//			}
//		}
//		else{
//			if(x[i] >= 65 && x[i] <= 90) {
//				x[i] = x[i] + 32;
//			}
//		}
//	}
//}

// ham dao nguoc chuoi strrev()         reverse
// tuan ==> nuat
//nuat ==> naut
//void my_strrev(char x[]) {
//	int i;
//	size_t len = strlen(x);
//	for(i=0; i<len/2; i++) {
//		char temp = x[i];
//		x[i] = x[len-i-1];
//		x[len-i-1] = temp;
//	}
//}

// ham kiem tra co phai chuoi doi xung khong
// tra ve 1 la dung 
// tra ve 0 la sai
//int kiemTraDoiXung(char x[]) {
//	int i;
//	size_t len = strlen(x);
//	for(i=0; i<len/2; i++) {
//		if(x[i] != x[len-i-1]) {
//			return 0;
//		}
//	}
//		return 1;
//}
// xoa xuong dong
void xoaXuongDong(char x[]) {
	int i;
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1] == '\n') {
			x[len-1] = '\0';
		}
	}
}
int main() {
//	tim kiem chuoi con trong chuoi  on

//	char chuoi[50];
//	char chuoi_con[50];
//	
//	printf("\nnhap vao chuoi : ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//	xoaXuongDong(chuoi);
//	
//	
//	printf("\nnhap vao chuoi can tim : ");
//	fgets(chuoi_con, sizeof(chuoi_con), stdin);
//	xoaXuongDong(chuoi_con);
//	
//	char* kq = strstr(chuoi, chuoi_con);
//	if(*kq != NULL) {
//		printf("tim thay chuoi !");
//		printf("\n");
//		printf("%s", kq);
//	}else{
//		printf("khong tim thay chuoi ! ");
//	}
	
//	char s1[50] = "xin chao tuanflute !";
//	char s2[50] = "";
//	printf("\ns_1 = %s", s1);
//	printf("\ns_2 = %s", s2);
//	printf("\n-------");
//
//	my_strcpy(s2, s1);
//	printf("\ns_1 = %s", s1);
//	printf("\ns_2 = %s", s2);


//printf("so sanh hai chuoi : %d", strcmp(s1, s2));
//nhan xet kq tra ve nhu sau 
//neu so 0 la hai chuoi bang nhau
//neu so am la chuoi 1 nho hon chuoi  2
// neu so duong la chuoi  1 lon hon chuoi 2


// 


//	char ten[50];
//	printf("nhap vao ten cua ban: ");
//	fgets(ten, sizeof(ten), stdin);
//	xoaXuongDong(ten);
//	
//	if (kiemTraDoiXung(ten)){
//		printf("Day la chuoi doi xung!");
//	}else{
//		printf("Day la chuoi khong doi xung!");
//	}
	
// ham strchr()   de tim kiem ki tu  trong chuoi    search
//char x1[50] = "tuan-flute-275";
//char* x2 ;
//x2 = strchr(x1, '2');
//printf("\nX1 = %s", x1);
//printf("\nX2 = %s", x2);



//vietHoaChuDau(ten);
//printf("viet hoa chu cai dau: %s", ten);
//my_strrev(ten);
//printf("dao nguoc chuoi: %s", ten);

// viet thuong viet hoa
//printf("chu hoa: %s", strupr(ten));
//printf("chu thuong : %s", strlwr(ten));
//
//	printf("\n do dai cua chuoi la: %d", my_strlen(ten));


}
