#include"stdio.h"
int i, j, m, n,option, a[100][100];
//menu bai tap mang hai chieu
int menu() {
	printf("\n-----------MENU-----------\n");
	printf("1. chuong trinh Nhap mang hai chieu\n");
	printf("2. chuong trinh Xuat mang hai chieu\n");
	printf("3. chuong trinh tim kiem trong mang hai chieu\n");
	printf("4. chuong trinh tinh trung binh cong \n");
	printf("5. chuong trinh tim max va tim min \n");
	printf("MOI BAN LUA CHON ...");
	scanf("%d", &option);
}
//nhap mang 2 chieu
void nhapM(int x[100][100], int m , int n) {
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("x[%d][%d]=",i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
//xuat mang 2 chieu
void xuatM(int x[100][100], int m, int n) {
	printf("\nMang vua nhap: \n");
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
}
//tim kiem trong mang hai chieu
int timKiem(int x[100][100], int m , int n, int gia_tri_tim_kiem) {
	int kq = 0;
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(x[i][j]==gia_tri_tim_kiem)
				return kq = 1;
		}
	}
	return kq;
}
int thuc_hien_tim_kiem(int x[100][100], int m , int n) {
	int luachon;

		int gia_tri_tim_kiem;
		printf("\nnhap vao gia tri can tim: ");
		scanf("%d", &gia_tri_tim_kiem);
		int kq = timKiem(a, m, n, gia_tri_tim_kiem);
		if(kq) {
			printf("TIM THAY gia tri trong mang !\n");
		} else {
			printf("KHONG TIM THAY gia tri !\n");
		}

		printf("\nnhap vao so bat ki de tiep tuc tim kiem ");
		printf("\nNhap 0 de thoat ");

}
// tinh tong trong mang hai chieu
int trungBinhCong(int x[100][100], int m , int n) {
	int tong = 0;
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			tong += x[i][j];
		}
	}
	printf("tong = %d", tong);
	float trung_binh = (float)tong /(m*n);
	printf("\ntrung binh cong la: %.2f", trung_binh);
}
// tim max and tim min trong mang hai chieu
int timMax(int x[100][100], int m , int n) {
	int max = x[0][0];
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(max < x[i][j])
				max = x[i][j];
		}
	}
	printf("MAX = %d\n", max);
}
//tim min trong mang hai chieu
int timMin(int x[100][100], int m , int n) {
	int min = x[0][0];
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(min > x[i][j])
				min = x[i][j];
		}
	}
	printf("MIN = %d\n", min);
}
// tong hop tim max min
int maxMin(int x[100][100], int m, int n) {
	timMax(a, m,n );
	timMin(a, m,n );
}
// tim min dong ''''''

int timMinDong(int x[100][100], int m , int n, int dong ) {
	int min = x[dong][0];
	for(j=0; j<n; j++) {
		if(min > x[dong ][j])
			min = x[dong][j];
	}
	return min;
}
//tim max dong
int timMaxDong(int x[100][100], int m ,int n, int dong) {
	int max = x[dong][0];
	for(j=0; j<n; j++) {
		if(max < x[dong][j])
			max = x[dong][j];
	}
	return max;

}
//tim min cot
int timMinCot(int x[100][100], int m, int n ,int cot) {
	int min = x[0][cot];
	for(i=0; i<m; i++) {
		if(min > x[i][cot])
			min = x[i][cot];
	}
	return min;
}
// tim max cot
int timMaxCot(int x[100][100], int m, int n ,int cot) {
	int max = x[0][cot];
	for(i=0; i<m; i++) {
		if(max < x[i][cot])
			max = x[i][cot];
	}
	return max;
}
// tong hop tim max min dong cot
int maxMinCotDong(int x[100][100], int m, int n ) {
	printf("\nMin cot 0 la: %d", timMinCot(a, m, n, 0));
	printf("\nMax cot 0 la: %d", timMaxCot(a, m,n, 0));
	printf("\nMin cot 1 la: %d", timMinCot(a, m, n, 1));
	printf("\nMax cot 1 la: %d", timMaxCot(a, m,n, 1));
	printf("\nMin cot 2 la: %d", timMinCot(a, m, n, 2));
	printf("\nMax cot 2 la: %d\n", timMaxCot(a, m,n, 2));
	
	printf("\nMin cua dong 0 la: %d", timMinDong(a, m,n, 0));
	printf("\nMax cua dong 0 la: %d", timMaxDong(a, m , n , 0));
	printf("\nMin cua dong 1 la: %d", timMinDong(a, m,n, 1));
	printf("\nMax cua dong 1 la: %d", timMaxDong(a, m , n , 1));
	printf("\nMin cua dong 2 la: %d", timMinDong(a, m,n, 2));
	printf("\nMax cua dong 2 la: %d", timMaxDong(a, m , n , 2));
}
int main() {
	do {
		menu();
		switch(option) {
			case 1: {
				printf("  nhap vao m va n : ");
				scanf("%d%d", &m, &n);
				nhapM(a, m, n);
				break;
			}
			case 2: {
				xuatM(a, m, n);
				break;
			}
			case 3: {
				thuc_hien_tim_kiem(a, m, n );
				break;
			}
			case 4: {
				trungBinhCong(a, m, n);
				break;
			}
			case 5: {
				maxMin(a, m, n );
				break;
			}
			case 6: {
				maxMinCotDong(a, m, n);
				break;
			}

		}
	} while(option > 0 && option < 6);
}
