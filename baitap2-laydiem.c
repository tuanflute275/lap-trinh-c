/*name: nguyen van tuan */
#include <stdio.h>
#include <conio.h>
#include"math.h"

// khai bao bien i; mang a[]; luachon = option
int option1;
int i,n ,a[100];
int i,k;
//  ham hien thi  menu lua chon
int menu() {
	printf("\n");
	printf("\t\n\---------------------MENU-----------------\n");
	printf("  1. chuong trinh nhap so luong phan tu \n");
	printf("  2. chuong trinh nhap gia tri cac phan tu\n");
	printf("  3. chuong trinh in mang vua nhap\n");
	printf("  4. chuong trinh in ra cac phan tu chan\n");
	printf("  5. chuong trinh in ra cac so nguyen to\n");
	printf("  6. Thoat chuon trinh\n");
	printf("\tMOI BAN CHON PHUONG AN THUC HIEN ..... ");
	scanf("%d", &option1);
}

// case 1: ham nhap mang
int nhapMang(int a[100], int n) {
	for( i = 0;  i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

//bai 2: ham xuat mang
int xuatMang(int a[100], int n) {
	printf("\n gia tri cua mang la: ");
	for(i = 0; i < n; i++) {
		printf("%3d", a[i]);

	}
}

//case 3: in ra cac phan tu chan
int sochan(int a[100], int n) {
	printf("\ncac phan tu chan la : ");
	for(i=0; i<n; i++) {
		if(a[i]  % 2 == 0) {
			printf("%3d ", a[i]);
		}
	}
}
//case 5
// ham kiem tra snt
int snt(int n) {
	int k=0, z=0;
	for(i=0; i<n; i++) {
		
		for(z=2; z<a[i]; z++) {
			if(a[i] % z == 0) {
				k=1;
				break;
			}
		}
		if(k==0){
		printf("snt : ");
	     printf("%d", a[i]);
	 }	
	}
	
}



// chuong trinh se duoc chay trong ham main
int main() {
	// vong lap do whhile
	do {
		menu();
		int n;
		switch(option1) {
			case 1: {
				printf("\n nhap so luong phan tu: ");
				scanf("%d", &n);
				break;
			}
			case 2: {
				nhapMang(a, n);
				break;
			}
			case 3: {
				xuatMang(a, n);
				break;
			}
			case 4: {
				sochan(a, n);
				break;
			}
			case 5: {
				snt(n);
				break;
			}

			case 6: {
				exit(0);
				break;
			}

		}
	} while(option1 >= 0 && option1 <=6 );

	getch();

}




