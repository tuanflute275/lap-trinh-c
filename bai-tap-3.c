#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// ham tim do dai chuoi
int my_strlen(char x[]) {
	int count = 0;
	while(x[count] != 0) {
		count ++;
	}
	return count++;
}
//ham  xoa xuong dong 
void xoaXuongDong (char x[]) {
	size_t len = strlen(x);
	if(x[len-1]=='\n') {
		x[len-1]='\0';
	}
}
int main() {
	
	//char ten[50] = {'t', 'u', 'a', 'n'};
	char ten[20];
	char tuoi= 18;
	printf("nhap vao ten cua ban : ");
	fgets(ten, sizeof(ten), stdin);
	xoaXuongDong(ten);
	
	 printf("ten cua ban la: %s", ten);
	 printf("\nDo dai cua ten la: %d", strlen(ten));
	 printf("\n Do dai cua chuoi dung ham : %d", my_strlen(ten));
	 
	 strcat(ten, tuoi);
	 printf("\nten = %s", ten);
	 
getch();
}


