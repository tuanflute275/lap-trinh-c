#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
int a, b, USCLN;
printf("nhap a: ");
scanf("%d", &a);
printf("nhap b: ");
scanf("%d", &b);

if(a==0 || b==0) {
	USCLN = (a+b);
}else{
	while(a!=b){
		if(a>b) {
			a-=b;
		}else{
			b-=a;
		}
	}
	USCLN = a;
}
printf("\nUSCLN= %d", USCLN);

getch();
}


