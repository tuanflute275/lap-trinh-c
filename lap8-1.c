#include"stdio.h"
#include"string.h"

typedef struct sinhVien {
	char ma_thi_sinh[20];
	char ho_ten[30];
	float diem_toan;
	float diem_hoa;
	float diem_ly;
	float diem_tong;
	float diem_trung_binh;
} SV;

void xoa(char x[]) {
	int i;
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n') {
			x[len-1]='\0';
		}
	}
}



int nhap(SV *sv) {

	do {
		printf("\nMa Thi Sinh(<5): ");
		fflush(stdin);
		fgets(sv->ma_thi_sinh, sizeof(sv->ma_thi_sinh), stdin);
		xoa(sv->ma_thi_sinh);
	} while( strlen(sv->ma_thi_sinh) > 5  );
	printf("\nNhap ho ten thi sinh: ");
	fflush(stdin);
	fgets(sv->ho_ten, sizeof(sv->ho_ten), stdin);
	xoa(sv->ho_ten);
	printf("\nDiem mon toan: ");
	scanf("%f", &sv->diem_toan);
	printf("\nDiem mon ly : ");
	scanf("%f", &sv->diem_hoa);
	printf("\nDiem mon hoa : ");
	scanf("%f", &sv->diem_ly);
	printf("\n");
}

//int tinh_tong(SV *sv){
//	sv->diem_tong=sv->diem_toan+sv->diem_hoa+sv->diem_ly;
////	sv.diem_tong=sv.diem_toan+sv.diem_ly+sv.diem_hoa;
//}

int tinh_tb(SV *sv) {
	sv->diem_trung_binh = (sv->diem_toan+sv->diem_hoa+sv->diem_ly)/3;
}
void in(SV sv) {

	printf("%5s \t %20s  \t %6.2f \t %6.2f \t %6.2f  \t %6.2f ", sv.ma_thi_sinh, sv.ho_ten, sv.diem_toan, sv.diem_ly, sv.diem_hoa, sv.diem_trung_binh);

}

void cap_nhat (SV *sv) {
	nhap(sv);
	tinh_tb(sv);

}

int main() {
	SV sv1;
	cap_nhat(&sv1);
//	nhap(&sv1);
	printf("%5s \t %20s  \t %5s \t %5s \t %5s  \t %6s ", "Ma", "Ho Ten", "Diem toan", "Diem ly", "Diem Hoa", "Diem TB");
	printf("\n");
	in(sv1);
}
