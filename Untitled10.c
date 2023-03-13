#include"stdio.h"
#include"string.h"
int i, j;
typedef struct SinhVien {
	int id[50];

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
	//printf("\nID:"); fflush(stdin); fgets(sv->id, sizeof(sv->id), stdin);
//	xoaXuongDong(sv->id);
	printf("\nTen: "); fflush(stdin); fgets(sv->ten, sizeof(sv->ten), stdin);
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
	printf("%5s \t %20s \t %10s \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %15s", sv.id, sv.ten,sv.gioiTinh, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh,  sv.maLop);
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

void XoaSV(SV ds[],int n)
{
    int Masvcanxoa;
    printf("\nNhap ma sinh vien can xoa:\n");
    scanf("%d", &Masvcanxoa);
    for(i=0;i<n;i++)
    {
        if(Masvcanxoa==ds[i].id)
        {
            ds[i] = ds[i+1];
            n--;
        }
    }
    printf("\nMang sau khi xoa la:\n");
    Xuat(ds,n);
}

//
int (SV ds[], int *n){
	n++;
	do{
		int res = 0;
		printf("\nNhap thong tin sinh vien can them :");
		ds[n-1].nhapSinhVien();
		for(i=0;i<n;i++){
			if(ds[i].id == sv[n-1].id){
				printf("\nMSSV khong duoc trung nhau ");
				res ++;
			}
		}
	}while(res!=0);
}

int main() {
	SV ds[50];
	int n;

	nhapDanhSachSinhVien(ds, &n);
	xuatDanhSachSinhVien(ds, n);
//	printf("\nSinh vien can tim la:\n");
//    Timkiem(ds,&n);
XoaSV(ds,n);	
}
