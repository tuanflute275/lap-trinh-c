#include"stdio.h"
#include "string.h"
#include "time.h"
int i,j ,n;

typedef struct SinhVien{
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
void xoaXuongDong(char x[]) {
	int i;
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n')
			x[len-1]='\0';
	}
}



void nhapSinhVien(SV *sv) {
	printf("ID: ");	scanf("%d", &sv->id);
	printf("\nTen: ");	fflush(stdin); fgets(sv->ten, sizeof(sv->ten), stdin); xoaXuongDong(sv->ten);
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv->gioiTinh, sizeof(sv->gioiTinh), stdin); xoaXuongDong(sv->gioiTinh);
	printf("\nNgay Sinh: "); scanf("%d%d%d", &sv->ngay, &sv->thang, &sv->nam);
	printf("\nDiem Mon 1: "); scanf("%f", &sv->diemMon1);
	printf("\nDiem Mon 2: "); scanf("%f", &sv->diemMon2);
	printf("\nDiem Mon 3: "); scanf("%f", &sv->diemMon3);
	printf("\nMa Lop: "); fflush(stdin); fgets(sv->maLop, sizeof(sv->maLop), stdin);xoaXuongDong(sv->maLop);
	printf("\n");
}

//in sinh vien
void inSinhVien(SV sv) {
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %25s", sv.id, sv.ten, sv.gioiTinh, sv.ngay, sv.thang, sv.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

//tinh tuoi  
void tinhTuoi(SV *sv) {
	if(sv->tuoi > 2022 ){
		printf("\nnam nhap vao khong hop le !");
	}else{
		sv->tuoi = 2022 - sv->nam;
	}
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
void nhapDanhSachSinhVien(SV ds[], int *n){
	do{
		printf("\nNhap vao so luong hoc sinh:");
		scanf("%d", n);
	}while(n<=0);
	for(i=0; i< *n ; i++){
		printf("\nNhap vao sinh vien thu %d: \n", i);
		capNhatSinhVien(&ds[i]);
	}
}
// ham in danh sach sinh vien
void xuatDanhSachSinhVien(SV ds[], int n){
	    int i;
		printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
		printf("\n");
		for(i=0; i<n ; i++){
		inSinhVien(ds[i]);
		printf("\n");
	}
}

//tim max dtb
float timMax_DiemTrungBinh(SV ds[], int n){
	float max = ds[0].diemTrungBinh;
	for(i=0; i<n; i++) {
		if(max < ds[i].diemTrungBinh) {
			max = ds[i].diemTrungBinh;
		}
	}
	return max;
}

//tim min tuoi
int timMin_Tuoi(SV ds[], int n) {
	int min = ds[0].tuoi;
	for(i=0; i<n; i++) {
		if(min > ds[i].tuoi) {
			min = ds[i].tuoi;
		}
	}
	return min;
}


//xuat ds sinh vien theo loai
void xuatDanhSachSinhVienXepLoai(SV ds[], int n, char xepLoai[]){
	printf("\n Danh sach sinh vien xep loai gioi");
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for(i=0; i<n ; i++){
		if (strcmp(strupr(ds[i].hocLuc),strupr(xepLoai))==0){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}


//xuat ds sinh vien theo lop 
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
	printf("\n Danh sach sinh vien thuoc lop %s", lop);
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for(i=0; i<n ; i++){
		if (strcmp(strupr(ds[i].maLop), strupr(lop))){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}

// tim kiem sinh vien theo ten
int timSinhVienTheoTen(SV ds[], int n, char ten[]){
	// 0 => false
	// 1 => true
	for(i=0; i<n ; i++){
		if(strstr(strupr(ds[i].ten), strupr(ten))){
			return 1;
		}
	}
	return 0;
}

//xoa sinh vien theo id
void xoaSinhVienTheoId(SV ds[], int *n, int id){
	for(i=0; i<n ; i++){
		if(ds[i].id == id){
			for(j=i; j<n; j++){
				ds[j] = ds[j+1];
			}
			n-=1;
			return;
		}
	}
}

//sx ds sinh vien theo dtb
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

//sx ds sv theo ten
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n){
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(strcmp(strupr(ds[i].ten), strupr(ds[j].ten))>0){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}


//nhap phim bat ki
void nhapPhimBatKy(){
		printf("\nNhap phim bat ky de tiep tuc!");
        getch();
}

//nhap file
void xuatVaoFile(SV ds[], int n){
	char tenFile[100];
	printf("\nNhap vao duong dan va ten file: ");
	fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); xoaXuongDong(tenFile);
	
	FILE *f;
	f = fopen(tenFile, "wb");
	if(f==NULL){
		printf("\nLoi mo file de ghi!");
		return;
	}
	fwrite(&n, sizeof(n), 1, f);
	for(i=0; i<n; i++){
		fwrite(&ds[i], sizeof(SV), 1, f);
	}
	fclose(f);

}


//doc file
void nhapTuFile(SV ds[], int *n){
	char tenFile[100];
	printf("\nNhap vao duong dan va ten file: ");
	fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); xoaXuongDong(tenFile);
	
	FILE *f;
	f = fopen(tenFile, "rb");
	if(f==NULL){
		printf("\nLoi mo file de doc!");
		return;
	}
	fread(&n, sizeof(n), 1, f);
	for(i=0; i<n; i++){
		fread(&ds[i], sizeof(SV), 1, f);
	}
	fclose(f);
}

int main(){

	int n;
	int id;
	int chon;
	SV ds[100];
	char lop[20];
	char tensv[20];
	char xepLoai[20];
	
	do{
		printf("\nMENU:");
		printf("\n1- Nhap danh sach sinh vien");
		printf("\n2- Xuat danh sach sinh vien");
		printf("\n3- Tim max DTB");
		printf("\n4- Tim min Tuoi");
		printf("\n5- Xuat danh sach sinh vien theo lop");
		printf("\n6- Xuat danh sach sinh vien loai");
		printf("\n7- Sap xep sinh vien theo DTB");
		printf("\n8- Sap xep sinh vien theo ten");
		printf("\n9- Tim sinh vien theo ten");
		printf("\n10- Xoa sinh vien theo ID");
		printf("\n11- Nhap danh sach sinh vien tu file");
		printf("\n12- Xuat danh sach sinh vien vao file");
		printf("\n0- Thoat");
		scanf("%d", &chon);
		
		switch(chon){
			case 1:
					nhapDanhSachSinhVien(ds, &n); 
					nhapPhimBatKy();
					break;
			case 2:
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;	
			case 3:
					printf("\n Max DTB = %.2f", timMax_DiemTrungBinh(ds, n));
					nhapPhimBatKy();
					break;
			case 4:
					printf("\n Min Tuoi = %d", timMin_Tuoi(ds, n));
					nhapPhimBatKy();
					break;
			case 5:
					
					printf("\nNhap Ma Lop can hien thi: "); fflush(stdin); fgets(lop, sizeof(lop), stdin); xoaXuongDong(lop); 
					xuatDanhSachSinhVienTheoLop(ds, n,lop);
					nhapPhimBatKy();
					break;
			case 6:
					
					printf("\nNhap xep loai can hien thi: "); fflush(stdin); fgets(xepLoai, sizeof(xepLoai), stdin); xoaXuongDong(xepLoai); 
					xuatDanhSachSinhVienXepLoai(ds, n, xepLoai);
					nhapPhimBatKy();
					break;
					
			case 7:
					printf("\nDanh sach sau khi sap xep theo DTB\n");
					sapXepDanhSachSinhVienTheoTen(ds, n);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
			case 8:
					printf("\nDanh sach sau khi sap xep theo ten\n");
					xuatDanhSachSinhVien(ds, n);
					xoaSinhVienTheoId(ds, n, 1);
					nhapPhimBatKy();
					break;
			case 9:
				
					printf("\nNhap ten sinh vien can tim: "); fflush(stdin); fgets(tensv, sizeof(tensv), stdin); xoaXuongDong(tensv); 
					printf("\nKet qua tim sinh vien: %d", timSinhVienTheoTen(ds, n, tensv));
					nhapPhimBatKy();
					break;
			case 10:
					
					printf("\nNhap id can xoa"); scanf("%d", &id);
					printf("\nDanh sach sau khi xoa\n");
					xoaSinhVienTheoId(ds, n, id);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
					
			case 11:
					nhapTuFile(ds, &n);
					nhapPhimBatKy();
					break;
			case 12:
					xuatVaoFile(ds, n);
					nhapPhimBatKy();
					break;
		}
	} while(n!=0);
}


