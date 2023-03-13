#include"stdio.h"
#include"string.h"
int i, *p;
int xoaXuongDong(char x[]) {
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n') {
			x[len-1]='\0';
		}
	}
}

int nhapTen(char *ten[]) {
	printf("\nNhap ten cua ban: ");
	gets(ten);
	xoaXuongDong(ten);

}

int chu_cai_thuong(char x[]) {
//	size_t len = strlen(x);
	for(i=0; i<strlen(x); i++) {
		if(x[i]>=65 && x[i]<=90) {
			x[i] = x[i]+32;
		}
	}
}

int chu_cai_hoa(char x[]) {
//	size_t len = strlen(x);
	for(i=0; i<strlen(x); i++) {
		if(x[i]>=97 && x[i]<=122) {
			x[i] = x[i]-32;
		}
	}
}

int chu_dau_viet_hoa(char x[]) {
	for(i=0; i<strlen(x); i++) {
		if(i==0 || x[i-1]==32) {
			if(x[i]>=65 && x[i]<=90)
					x[i]=x[i]+32;
			else {
				if(x[i]>=97 && x[i]<=122)
				x[i]=x[i]-32;
				
			}
		}
	}
}

int tim_kiem(char x1[], char x2[]){
	printf("\nNhap chuoi cua ban :");
	gets(x1); xoaXuongDong(x1);
	
}



int main() {
	char ten[50], x1[50], x2[30];
	nhapTen(&ten);

//	chu_cai_thuong(ten);
//	printf("\nten viet thuong: %s", ten);
//	chu_cai_hoa(ten);
//	printf("\nten viet hoa: %s", ten);
	chu_dau_viet_hoa(ten);
	printf("\nten viet hoa chu cai dau: %s", ten);
	
	tim_kiem(x1, x2);



}
