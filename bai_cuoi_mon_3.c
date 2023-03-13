#include"stdio.h"
int i;
typedef struct sinh_vien{
    char ma[10];
    char ten[30];
    char sdt[10];
    float toan, li, hoa, tb;
}SV;

void nhap_sv(SV *sv){
	fflush(stdin);
	printf("\nNhap ma sinh vien: ");gets(sv->ma);
	printf("\nNhap ten sinh vien :");gets(sv->ten);
	printf("\nNhap sdt : ");gets(sv->sdt);
	printf("\nDiem toan: ");scanf("%f", &sv->toan);
	printf("\nDiem li: ");scanf("%f", &sv->li);
	printf("\nDiem hoa: ");scanf("%f", &sv->hoa);
}

void in_sv(SV sv){
	printf("\nMa sinh vien la: %s", sv.ma);
	printf("\nTen sinh vien la: %s", sv.ten);
	printf("\nSDT la : %s", sv.sdt);
	printf("\nDiem toan la: %.2f", sv.toan);
	printf("\nDiem li la: %.2f", sv.li);
	printf("\nDiem hoa la: %.2f", sv.hoa);
	
}

int nhap_ds(SV ds[], int *n ){
	int i;
	printf("\nNhap so luong sinh vien : ");
	scanf("%d", n);fflush(stdin);
	for(i=0;i<*n;i++){
		printf("\nNhap sinh vien thu %d", i+1);
		nhap_sv(&ds[i]);
	}
}
void xuat_ds(SV ds[], int n){
	int i;
	printf("\n-----INFO----");
	for(i=0;i<n;i++){
		in_sv(ds[i]);
		printf("\n\n");
	}
	printf("\n");
}
void xuatVaoFile(SV ds[], int n){
	char tenFile[100];
	printf("\nNhap vao duong dan va ten file: ");
	fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); 
	
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
void nhapPhimBatKy(){
		printf("\nNhap phim bat ky de tiep tuc!");
        getch();
}
int main(){
	int n;
	SV ds[50];
	nhap_ds(ds, &n);
	nhapPhimBatKy();
	xuat_ds(ds, n);
	nhapPhimBatKy();
	xuatVaoFile(ds, n);
	nhapPhimBatKy();
	
	

}
