#include"stdio.h"
#include"string.h"
int i, j;
typedef struct SinhVien {
	char maSinhVien[20];

	char ten[50];

	char gioiTinh[5];

	float diemMon1;

	float diemMon2;

	float diemMon3;

	float diemTrungBinh;

	char maLop[30];
} SV;

//ham xoa xuong dong
void xoaXuongDong(char x[]) {
	int i;
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n')
			x[len-1]='\0';
	}
}



void nhapSinhVien(SV *sv) {
	while(strlen(sv->maSinhVien) != 5){
		printf("\nMa sinh vien (5 ki tu):"); fflush(stdin); fgets(sv->maSinhVien, sizeof(sv->maSinhVien), stdin);
		xoaXuongDong(sv->maSinhVien);
	}
	
//	while(strlen(sv->ten) > 5 ){
		printf("\nHo Ten: "); fflush(stdin); fgets(sv->ten, sizeof(sv->ten), stdin);
		xoaXuongDong(sv->ten);
	
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv->gioiTinh, sizeof(sv->gioiTinh), stdin);
	xoaXuongDong(sv->gioiTinh);
	printf("\nDiem Mon 1: "); scanf("%f", &sv->diemMon1);
	printf("\nDiem Mon 2: "); scanf("%f", &sv->diemMon2);
	printf("\nDiem Mon 3: ");scanf("%f", &sv->diemMon3);
	printf("\nMa Lop: ");fflush(stdin);fgets(sv->maLop, sizeof(sv->maLop), stdin);
	xoaXuongDong(sv->maLop);
	printf("\n");
}

//in sinh vien
void inSinhVien(SV sv) {
	printf("%5s \t %20s \t %10s \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %15s", sv.maSinhVien, sv.ten,sv.gioiTinh, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh,  sv.maLop);
	printf("\n");
}

int tinh_dtb(SV *sv){
	sv->diemTrungBinh=(sv->diemMon1+sv->diemMon2+sv->diemMon3)/3;
}

void cap_nhat_sinh_vien(SV *sv){
	nhapSinhVien(sv);
	tinh_dtb(sv);
}

void nhapDanhSachSinhVien(SV ds[], int *n){
	do{
		printf("\nNhap vao so luong hoc sinh:");
		scanf("%d", n);
	}while(n<=0);
	for(i=0; i< *n ; i++){
		printf("\nNhap vao sinh vien thu %d: \n", i);
		cap_nhat_sinh_vien(&ds[i]);
	}
}
// ham in danh sach sinh vien
void xuatDanhSachSinhVien(SV ds[], int n){
	    int i;
		printf("%5s \t %20s \t %10s \t %10s \t %6s \t %6s \t %6s \t %15s", "ID", "Ho Ten", "Gioi Tinh" ,"Diem toan", "Diem ly", "Diem Hoa", "Diem TB","Ma Lop" );
		printf("\n");
		for(i=0; i<n ; i++){
		inSinhVien(ds[i]);
		printf("\n");
	}
}


void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(ds[i].diemTrungBinh>ds[j].diemTrungBinh){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}

//xoa sihn vien
int xoa_sinh_vien(SV ds[], int n){
	int masvcanxoa[50];
	printf("\nNhap ma sinh vien can xoa :");
	scanf("%d", &masvcanxoa);
	for(i=0;i<n;i++){
		if(masvcanxoa == ds[i].maSinhVien){
			ds[i]= ds[i+1];
			n--;
		}
	}
	printf("\nMang sau khi xoa la: ");
	xuatDanhSachSinhVien(ds, n);
}

void Timkiem(SV sv[], int n)// ham tim kiem
{
    int x;
    printf("\nNhap ma sinh vien can tim:");
    scanf("%d", &x);
    printf("MaSV \t TenSV \t Lop \t Toan \t Van \t Anh \t DTB\n");
    for(i=0;i<n;i++)
    {
        
        if(sv[i].MaSV == x)
        {
        	inSinhVien(ds[i]);
        }
    } 
}
//tim kiem sv theo lop
//int timSinhVienTheoTen(SV ds[], int n, char ten[]){
//	// 0 => false
//	// 1 => true
//	for(i=0; i<n ; i++){
//		if(strstr(ds[i].ten, (ten)){
//			return 1;
//		}
//	}
//	return 0;
//}

//xoa sv
//void xoaSinhVienTheoId(SV ds[], int *n, int id){
//	for(i=0; i<n ; i++){
//		if(ds[i].id == id){
//			for(j=i; j<n; j++){
//				ds[j] = ds[j+1];
//			}
//			n-=1;
//			return;
//		}
//	}
//}

//nhap phim bat ki
void nhapPhimBatKy() {
	printf("\nNhap phim bat ky de tiep tuc!");
	getch();
}

//nhap file
//void xuatVaoFile(SV ds[], int n){
//	char tenFile[100];
//	char x[50];
//	printf("\nNhap vao duong dan va ten file: ");
//	fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); xoaXuongDong(tenFile);
//
//	FILE *f;
//	f = fopen(tenFile, "wb");
//	if(f==NULL){
//		printf("\nLoi mo file de ghi!");
//		return;
//	}
//	fwrite(&ds[i], sizeof(SV), 1, f);
//	
//
//	
//	fclose(f);
//
//}
//
//
////doc file
//void nhapTuFile(SV ds[], int *n){
//	char tenFile[100];
//	printf("\nNhap vao duong dan va ten file: ");
//	fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); xoaXuongDong(tenFile);
//
//	FILE *f;
//	f = fopen(tenFile, "rb");
//	if(f==NULL){
//		printf("\nLoi mo file de doc!");
//		return;
//	}
//	fread(&ds[i], sizeof(SV), 1, f);
//
//	fclose(f);
//}

int main() {
	SV sv1;
	int option, n;
	SV ds[50];
	do{
		printf("\n\t--MENU--");
		printf("\n1-Nhap sinh vien");
		printf("\n2- Hien thi Thong Tinh Sinh Vien");
		printf("\n3- Sap Xep Sinh Vien theo diem trung binh");
		printf("\n4- Tim kiem sinh vien theo lop");
		printf("\n5- Tim kiem sinh vien theo diem trong khoang(n-m)");
		printf("\n6- Cap Nhat Sinh Vien (them , sua, xoa)");
		printf("\n0- Thoat");
		scanf("%d", &option);

		switch(option){
			case 1:{
					nhapDanhSachSinhVien(ds, &n);
					nhapPhimBatKy();
					break;
				}
				
			case 2:
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
			case 3:
					printf("\nDanh sach sau khi sap xep theo DTB\n");
					sapXepDanhSachSinhVienTheoDTB(ds, n);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6: {
				int id;
//				int chon;
//				printf("\n1.Them sinh vien ");
//				printf("\n2.Sua sinh vien ");
//				printf("\n3.Xoa sinh vien ");
//				printf("\n0.thoat");
//				scanf("%d", &chon);
//				switch(chon){
//					case 0: break;
//					case 1:
//						printf("\nNhap ma sinh vien can xoa"); scanf("%d", &mainh);
//						printf("\nDanh sach sau khi xoa\n");
						xoa_sinh_vien(ds, n);
//						xoaSinhVienTheoId(ds, n, id);
//						xuatDanhSachSinhVien(ds, n);
						nhapPhimBatKy();
						break;
				}
//			}
//					
//			
			}
}while(option != 0);
}
