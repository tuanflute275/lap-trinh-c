#include"stdio.h"
#include"string.h"
int i;

int nhapTen(char *ten[]) {
	printf("\nNhap ten cua ban: ");
	gets(ten);
	
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

int main() {
	char ten[50], x1[50], x2[30];
	nhapTen(&ten);
	chu_dau_viet_hoa(ten);
	printf("\nten viet hoa chu cai dau: %s", ten);
}
