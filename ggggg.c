#include"stdio.h"
#include"string.h"


int xoaXuongDong(char x[]){
	int i;
	size_t len = strlen(x);
	for(i=0; i<len;i++){
		if(x[len-1]=='\n'){
			x[len-1]='\0';
		}
	}
}


int main(){
	char *p;
	char c1[20], c2[20];
printf("\nnhap vao chuoi : ");
fgets(c1, sizeof(c1), stdin);
xoaXuongDong(c1);
p = strchr(c1, 'f');
printf("\n ket qua: %s", strchr(c1, 'f'));
	
	
	
	
//	int ten[50];
//	printf("\nNHap ten cua ban: ");
//	fgets(ten, sizeof(ten), stdin);
//	printf("ten cua ban la: %s", ten);
//	xoaXuongDong(ten);
//	printf("\nso ki tu la: %d", strlen(ten));
//	
//	printf("\nten sau khi viet hoa: %s", strupr(ten));
//	printf("\nten sau khi viet thuong: %s", strlwr(ten));

//	char x1 = "lop c2208g";
//	
//
//	printf("\ntim kiem ki tu: %s", 	p = strchr(x1, 'c'));

//printf("\nnhap vao chuoi can tim: ");
//fgets(c2, sizeof(c2), stdin);
//xoaXuongDong(c2);




	
	
	
}
