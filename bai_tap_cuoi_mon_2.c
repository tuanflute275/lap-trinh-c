#include"stdio.h"
int a[50][50],tong=0,tongbien=0,n,chon, i, j;
int menu() {
	printf("\n---MENU-----");
	printf("\n1.Nhap so phan tu va gia tri mang 2 chieu");
	printf("\n2.In ra man hinh mang vua nhap ma tran vuong");
	printf("\n3.In ra cac phan tu tren duong bien");
	printf("\n4.In ra duong cheo huyen ");
	printf("\n5.In ra duong cheo sac");
	printf("\n6.Tinh tong cac phan tu tren duong bien");
	printf("\n7.Tinh tong giua 2 gia tri lon nhat va nho nhat trong mang");
	printf("\n8.Thoat");
	printf("\nSu lua chon cua ban la: ");
	scanf("%d", &chon);
}
int nhap_ma_tran(int a[50][50], int *n) {
	printf("\nNhap canh cua ma tran vuong:" );
	scanf("%d", n);
	for(i=0; i<*n; i++) {
		for(j=0; j<*n; j++) {
			printf("array[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat_ma_tran(int a[50][50], int n) {
	printf("\nMang vua nhap la: ");
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%4d", a[i][j]);
		}
	}
}


int in_duong_bien(int a[50][50], int n) {
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i==0 || j==0 || i==n-1 || j==n-1) {
				printf("%4d", a[i][j]);
			} else {

				printf("    ");
			}

		}
		printf("\n");
	}
}

int in_duong_cheo_huyen(int a[50][50], int n) {
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i==j ) {
				printf("%4d", a[i][j]);
			} else {

				printf("     ");
			}

		}
		printf("\n");
	}
}

int in_duong_cheo_sac(int a[50][50], int n) {
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if( i+j==n-1 ) {
				printf("%4d", a[i][j]);
			} else {

				printf("     ");
			}

		}
		printf("\n");
	}
}

int tinh_tong_bien(int a[50][50], int n ){
		for( i=0;i<n;i++){
			        tongbien = tongbien + a[i][0] + a[i][n-1];
			    }
			    
			    for( j=1;j<n-1;j++){
			        tongbien = tongbien + a[0][j] + a[n-1][j] ;
			    }
			    
			    printf(" Tong duong bien la: %d\n",tongbien);	
	
}

int tinh_tong_giua_max_min(int a[50][50], int n){
		int max = a[0][0];
				int min = a[0][0];
				for(i=0; i<n; i++) {
						for (j=0; j<n; j++){
				if(max < a[i][j])
				max = a[i][j];
				}
			}
				printf("\nGia tri lon nhat trong mang = %d\n", max);

				for(i=0; i<n; i++) {
					for (j=0; j<n; j++){
					if(min > a[i][j])
					min = a[i][j];
				}
			}
				printf("\nGia tri nho nhat trong mang = %d\n", min);

            for(i=min+1;i<max;i++){
                tong += i;
            }
            printf("\nTong giua max min la: %d", tong);
		
}


	




void nhapPhimBatKy() {
	printf("\nNhap phim bat ky de tiep tuc!");
	getch();
}
int main() {
	do {
		menu();
		switch(chon) {
			case 1:
				nhap_ma_tran(a, &n);
				nhapPhimBatKy();
				break;
			case 2:
				xuat_ma_tran(a, n);
				nhapPhimBatKy();
				break;
			case 3:
				in_duong_bien(a, n);
				nhapPhimBatKy();
				break;
			case 4:
				in_duong_cheo_huyen(a, n);
				nhapPhimBatKy();
				break;
			case 5:
				in_duong_cheo_sac(a, n);
				nhapPhimBatKy();
				break;
			case 6:
				tinh_tong_bien(a, n);
				nhapPhimBatKy();
				break;
			case 7:
				tinh_tong_giua_max_min(a, n);
				nhapPhimBatKy();
				break;
			case 8:
				exit(0);
				break;


		}
	} while(chon < 8 && chon > 0);

}

