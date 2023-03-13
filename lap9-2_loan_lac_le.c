#include"stdio.h"
#include"string.h"
int  i, j, n;

typedef struct thuviensach {
	char tensach[30];
	char tacgia[20];
	int namxuatban;
	char nhaxuatban[30];
	float giatien;
} TV;



void nhapSach(TV *sach) {
//	printf("\n  Ban da lua chon chuong trinh so 1.");
	printf("\n  - Nhap thong tin ve sach- ");

	printf("\n  Thong Tin Ve Sach La:  ");
	do {
		printf(" \n Ten sach la: ");
		gets(sach->tensach);
	} while (strlen(sach->tensach) > 30);

	printf("\n Ten tac gia la: ");
	gets(sach->tacgia);

	printf("\n Nam xuat ban la: ");
	scanf("%d", &sach->namxuatban);
	fflush(stdin);

	printf(" \n Nha xuat ban la: ");
	gets(sach->nhaxuatban);

	printf("\n Gia tien la: ");
	scanf("%f", &sach->giatien);
	fflush(stdin);

}

int hienThi(TV sach) {
	printf("\n Ten sach    : %s", sach.tensach);
	printf("\n Ten tac gia : %s", sach.tacgia);
	printf("\n xuat ban nam: %d", sach.namxuatban);
	printf("\n Nha xuat ban: %s", sach.nhaxuatban);
	printf("\n Gia tien la : %0.3fVND", sach.giatien);
}

int nhap_ds_sach(TV ds[], int *n) {
	printf("\nNhap so luong sach : ");
	scanf("%d", n);
	fflush(stdin);
	for(i=0; i<*n; i++) {
		nhapSach(&ds[i]);
	}
}

void Sapxep(TV ds[],int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		   if(strcmp(ds[i].tensach,ds[j].tensach)<0)
		  {
			TV k=ds[i];
            ds[i]=ds[j];
            ds[j]=k;
		  }
		}
	} 
}

void hien_thi_ds(TV ds[], int n) {
	for(i=0; i<n; i++) {
		hienThi(ds[i]);
		printf("\n");

	}

}
//int timSachTheoTen(TV ds[], int n, char ten[]){
//	// 0 => false
//	// 1 => true
//	for(i=0; i< n ; i++){
//		if(strstr(strupr(ds[i].tensach), strupr(tensach))){
//			return 1;
//		}
//	}
//	return 0;
//}//ko chay dc phan nay r huhuhuhuhu


void nhapSoBatKi() {
	printf("\nNhap phim bat ki de tiep tuc");
	getch();
}

int main() {
	struct thuviensach tv1;
	struct thuviensach ds[20];
	int luachon;

	do {
		printf("\t \n ------------------------------------------------");
		printf("\t \n  Chuong Trinh MENU ");
		printf("\n  1. Nhap Thong Tin Sach. ");
		printf("\n  2. Hien Thi Thong Tin Ve Sach. "); //theo alphabet
		printf("\n  3. Tim Kiem Sach Theo Ten. ");
		printf("\n  4. Sua Thong Tin Sach. "); //chi so
		printf("\n  5. Thong Tin Thu Vien. "); //dang text
		printf("\n  6. Thoat Chuong Trinh. ");
		printf("\nBan chon: ");
		scanf("%d", &luachon);

		switch(luachon) {
			case 1:{
				nhap_ds_sach(ds, &n);
				nhapSoBatKi();
				break;
			}
			case 2:{
				Sapxep(ds, n);
				hien_thi_ds(ds, n);
				break;
			}
				
//		case 3:{
//					char tensach1[20];
//					printf("\nNhap ten sach can tim: "); fflush(stdin);gets(tensach1);
//					printf("\nKet qua tim sach: %d", timSachTheoTen(ds, n, tensach1));
//					nhapPhimBatKy();
//			break;
//		}
			
//		case 4:
//		case 5:

		}
	} while(luachon != 0);
}
