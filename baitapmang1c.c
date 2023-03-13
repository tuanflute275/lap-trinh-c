#include <stdio.h>
#include <conio.h>
// khai bao bien i; mang a[]; luachon = option
int option;
int i ,n ,a[100];
//  ham hien thi  menu lua chon
int menu() {
	printf("\n");
	printf("\t\n\---------------------MENU-----------------\n");
	printf("  1. viet chuong trinh nhap vao hai so \n");
	printf("  2. chuong trinh in ra man hinh cac mang vua nhap\n");
	printf("  3. chuong trinh tinh tong cac phan tu chan\n");
	printf("  4. chuong trinh in ra cac phan tu le\n");
	printf("  5. chuong trinh in ra cac phan tu co chi so le\n");
	printf("  6. chuong trinh tim max va min trong mang\n");
	printf("  7. chuong trinh tinh tong trung binh cac phan tu cua mang\n");
	printf("  8. chuong trinh tinh tong binh phuong cac phan tu cua mang\n");
	printf("  9. chuong trinh tim mot gia tri trong mang vua nhap\n ");
	printf("10.chuong trinh in ra cac phan tu chia het cho 3 va 4\n ");
	printf("\tMOI BAN CHON PHUONG AN THUC HIEN ..... \n");
	scanf("%d", &option);
}

// bai 1: ham nhap mang
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


//bai 3: tinh tong cac phan tu chan la
int b3(int a[100], int n) {
	int tong = 0;
	for( i=0; i<n; i++) {
		if(a[i] % 2 == 0) {
			tong+=a[i];
		}
	}
	printf("\nTong = %d", tong);

}

//bai 4: in ra cac phan tu le
int b4(int a[100], int n) {
	printf("cac phan tu le la : ");
	for(i=0; i<n; i++) {
		if(a[i]  % 2 == 1) {
			printf("%3d ", a[i]);
		}
	}
}

//bai 5: in ra cac phan tu co chi so ( key) le
int b5(int a[100], int n) {
	printf("cac phan tu co chi so (key) le la: ");
	for(i = 0; i<n; i++) {
		if(i % 2 == 1) {
			printf("%2d", a[i]);
		}
	}
}
// bai 6: tim max va tim min
int timMax(int a[100], int n) {
	int max = a[0];
	for(i=0; i<n; i++) {
		if(max < a[i])
			max = a[i];
	}
	printf("\nMax = %d\n", max);
}
int timMin(int a[100], int n) {
	int min = a[0];
	for(i=0; i<n; i++) {
		if(min > a[i])
			min = a[i];
	}
	printf("Min = %d", min);
}
int b6(int a[100], int n) {
	timMax(a, n);
	timMin(a, n);
}
//bai 7; tinh tong ttrung binh cac pha tu
int b7(int a[100], int n) {
	int tong = 0;
	int trungBinhCong;
	for( i=0; i<n; i++) {
		tong+=a[i]; // tong= tong+a[i];
	}
	trungBinhCong = tong  / n;
	printf("\nTrung Binh Cong La : %d", trungBinhCong);
}

//bai 8: tinh tong binh phuong cac phan tu
int b8(int a[100], int n) {
	int tong = 0;
	int tongBinhPhuong;
	for( i=0; i<n; i++) {
		tong+=a[i];
	}
	tongBinhPhuong = tong * tong;

	printf("\nTong = %d", tong);
	printf("\nTong binh phuong cac gia tri = %d", tongBinhPhuong);

}


//bai 9: thuc hien tim kiem
int timKiem(int x[100], int n, int tk) {
	int kq = 0;
	for(i=0; i<n; i++) {
		if(x[i]==tk) {
			kq = 1;
			return 1;
		}
	}
	return kq;
}
// bai 9:  tiep tuc la thuc hien  tim kiem
void thucHienTimKiem(int x[100], int n) {
	int tk;
	printf("Nhap vao gia tri can tim: ");
	scanf("%d", &tk);
	int kq = timKiem(x, n, tk);
	if(kq==1) {
		printf("\n Find !");
	} else {
		printf("\n not found !");
	}
}

// bai 10: in ra cac phan tu chia het cho  3 va 4
int b10 (int a[100], int n) {

	printf("\ncac phan tu chia het cho  3 va 4 la: ");
	for(i=0; i< n; i++) {
		if(a[i]  % 3 == 0 && a[i] % 4 == 0) {
			printf("%2d", a[i]);
		}
	}
	printf("do not have !");
}


// chuong trinh se duoc chay trong ham main
int main() {
	// vong lap do whhile
	do {
		menu();
		int n;
		switch(option) {
			case 0:
				break;
			case 1: {
				printf("nhap so luong phan tu: ");
				scanf("%d", &n);
				nhapMang(a, n);
				break;
			}
			case 2: {
				xuatMang(a, n);
				break;
			}

			case 3: {
				b3(a, n);
				break;
			}
			case 4: {
				b4(a, n);
				break;
			}
			case 5: {
				b5(a, n);
				break;
			}
			case 6: {
				b6(a, n);
				break;
			}
			case 7: {
				b7(a, n);
				break;
			}
			case 8: {
				b8(a, n);
				break;
			}
			case 9: {
				thucHienTimKiem(a, n);
				break;
			}
			case 10: {
				b10(a, n);
				break;
			}
		}

	} while(option >= 0 && option <= 10);

	getch();
}


