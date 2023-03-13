//#include "stdio.h"
//
//int main() {
#include"stdio.h"
#include "string.h"
//#include "time.h"
int i=0;

typedef struct SinhVien {
	int id;

	char ten[50];

	char gioiTinh[5];

	int ngay;

	int thang;

	int nam;

	int tuoi;

	float diemMon1;

	float diemMon2;

	float diemMon3;

	float diemTrungBinh;

	char hocLuc[10];

	char maLop[30];
} SV;



//void nhapSinhVien(SV &sv);
//
//void inSinhVien(SV sv);
//
//void tinhTuoi(SV &sv);
//
//void tinhDiemTrungBinh(SV *sv)
//
//void xepLoai(SV &sv);
//
//void capNhatSinhVien(SV &sv);
//
//void nhapDanhSachSinhVien(SV ds[], int &n);
//
//void xuatDanhSachSinhVien(SV ds[], int n);
//
//float timMax_DiemTrungBinh(SV ds[], int n);
//
//int timMin_Tuoi(SV ds[], int n);
//
//void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n);
//
//void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
//
//int timSinhVienTheoTen(SV ds[], int n, char ten[]);
//
//void xoaSinhVienTheoId(SV ds[], int &n, char ten[]);
//
//void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
//
//void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);


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
	printf("ID: ");
	scanf("%d", &sv->id);
	printf("\nTen: ");
	fflush(stdin);
	fgets(sv->ten, sizeof(sv->ten), stdin);
	xoaXuongDong(sv->ten);
	printf("\nGioi tinh: ");
	fflush(stdin);
	fgets(sv->gioiTinh, sizeof(sv->gioiTinh), stdin);
	xoaXuongDong(sv->gioiTinh);
	printf("\nNgay Sinh: ");
	scanf("%d%d%d", &sv->ngay, &sv->thang, &sv->nam);
	printf("\nDiem Mon 1: ");
	scanf("%f", &sv->diemMon1);
	printf("\nDiem Mon 2: ");
	scanf("%f", &sv->diemMon2);
	printf("\nDiem Mon 3: ");
	scanf("%f", &sv->diemMon3);
	printf("\nMa Lop: ");
	fflush(stdin);
	fgets(sv->maLop, sizeof(sv->maLop), stdin);
	xoaXuongDong(sv->maLop);
	printf("\n");
}

//in sinh vien
void inSinhVien(SV sv) {
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngay, sv.thang, sv.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

//tinh tuoi
void tinhTuoi(SV *sv) {
	sv->tuoi = 2022 - sv->nam;
	//printf("\nTUOI = %d\n\n", sv->tuoi);
}

// ham tinh trung binh struct
int diemTrungBinh(SV *sv) {
	sv->diemTrungBinh = (sv->diemMon1 + sv->diemMon2 + sv->diemMon3) / 3;
}

// ham xep loai hoc sinh
void xepLoai (SV *sv) {
	if(sv->diemTrungBinh > 9) {
		strcpy(sv->hocLuc, "XUAT SAC");
	} else if(sv->diemTrungBinh > 8) {
		strcpy(sv->hocLuc, "GIOI");
	} else if(sv->diemTrungBinh > 7) {
		strcpy(sv->hocLuc, "KHA");
	} else if(sv->diemTrungBinh > 5) {
		strcpy(sv->hocLuc, "TRUNG BINH");
	} else if(sv->diemTrungBinh < 5) {
		strcpy(sv->hocLuc, "YEU");
	}
}
// ham cap nhat sinh vien
void capNhatSinhVien(SV *sv) {
	nhapSinhVien(sv);
	tinhTuoi(sv);
	diemTrungBinh(sv);
	xepLoai(sv);
}




//ham nhap danh sach sinh vien
void nhapDanhSachSinhVien(SV ds[], int *n) {
	do {
		printf("\nNhap vao so luong hoc sinh:");
		scanf("%d", &n);
	} while(n<=0);
	for(i=0; i<n ; i++) {
		printf("\nNhap vao sinh vien thu %d: \n", i);
		capNhatSinhVien(&ds[i]);
	}
}
// ham in danh sach sinh vien
void xuatDanhSachSinhVien(SV ds[], int n) {
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", ds[i].id , ds[i].ten, ds[i].gioiTinh, ds[i].ngay, ds[i].thang, ds[i].nam, ds[i].tuoi, ds[i].diemMon1,ds[i].diemMon2, ds[i].diemMon3, ds[i].diemTrungBinh, ds[i].hocLuc, ds[i].maLop);

	
	for(i=0; i<n; i++) {
		
//		printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", SV.id SV.ten, SV.gioiTinh, SV.ngay, SV.thang, SV.nam, SV.tuoi, SV.diemMon1, SV.diemMon2, SV.diemMon3, SV.diemTrungBinh, SV.hocLuc, SV.maLop);
//}
		
		
//		printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", SV.id sv[i].ten, sv[i].gioiTinh, sv[i].ngay, sv[i].thang, sv[i].nam, sv[i].tuoi, sv[i].diemMon1, sv[i].diemMon2, sv[i].diemMon3, sv[i].diemTrungBinh, sv[i].hocLuc, sv[i].maLop);
//}

}
//void xuatDanhSachSinhVien(SV ds[], int n){
//	    int i;
//		printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
//		printf("\n");
// 		for(i=0; i<n ; i++){
//		inSinhVien(ds[i]);
//		printf("\n");
//	}
//}

//tim max dtb
//float timMax_DiemTrungBinh(SV ds[], int n){
//	float max = ds[0].diemTrungBinh;
//	for(i=0; i<n; i++) {
//		if(max < ds[i].diemTrungBinh) {
//			max = ds[i].diemTrungBinh;
//		}
//	}
//	return max;
//}

//tim min tuoi
//int timMin_Tuoi(SV ds[], int n) {
//	int min = ds[0].tuoi;
//	for(i=0; i<n; i++) {
//		if(min > ds[i].tuoi) {
//			min = ds[i].tuoi;
//		}
//	}
//	return min;
//}


int main() {
	struct SinhVien sv1;
	SV ds[100];
	int n;
	nhapDanhSachSinhVien(ds, &n);
	xuatDanhSachSinhVien(ds, n);
	//printf("\n Max DTB = %.2f", timMax_DiemTrungBinh(ds, n));

//	capNhatSinhVien(&sv1);
//	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
//	printf("\n");
//	inSinhVien(sv1);
return 0;
}

