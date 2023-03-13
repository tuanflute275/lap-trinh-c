#include"stdio.h"
#include "string.h"
#include "time.h"

int i;

typedef struct sinhVien {
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
}SV;


//ham xoa xuong dong
int xoaXuongDong(char x[]){
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n'){
			x[len-1]='\0';
		}
	}
}

//ham tinh tuoi
int tinhTuoi(SV sv) {
	if(sv.tuoi > 2022) {
		printf("\nNam nhap vao khong hop le !");
	}else{
		sv.tuoi = 2022 - sv.nam;
	}
}

//ham nhap vao sinh vien
void nhapSinhVien(SV *sv){
	printf("\nID          : "); scanf("%d", &sv->id);
	printf("\nTen         :"); fflush(stdin); fgets(sv->ten, sizeof(sv->ten), stdin); xoaXuongDong(sv->ten);
	printf("\nGioi Tinh   :"); fflush(stdin); fgets(sv->gioiTinh, sizeof(sv->gioiTinh), stdin); xoaXuongDong(sv->gioiTinh);
	printf("\nNgay Sinh   : "); scanf("%d%d%d", &sv->ngay, &sv->thang, &sv->nam);
	printf("\nDiem Mon 1  : "); scanf("%d", &sv->diemMon1);
	printf("\nDiem Mon 2  : "); scanf("%d", &sv->diemMon2);
	printf("\nDiem Mon 3  : "); scanf("%d", &sv->diemMon3);
	printf("\n Ma Lop	   : "); fflush(stdin); fgets(sv->maLop, sizeof(sv->maLop), stdin); xoaXuongDong(sv->maLop);
	printf("\n");
}



// ham in sinh vien
void inSinhVien(SV sv){
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngay, sv.thang, sv.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}
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



int main() {
	SV sv1;
	nhapSinhVien(&sv1);
	inSinhVien(sv1);

}
