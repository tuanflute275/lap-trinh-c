#include"stdio.h"
#include"string.h"
int i;
typedef struct doiBong {
	char id[20];
	char fullname[30];
	char ds[50];

} DA;

void xoa(char x[]) {
	int i;
	size_t len = strlen(x);
	for(i=0; i<len; i++) {
		if(x[len-1]=='\n') {
			x[len-1]='\0';
		}
	}
}

int nhap(DA *da) {

	do {
		printf("\nTen Doi Bong (<5): ");
		fflush(stdin);
		fgets(da->id, sizeof(da->id), stdin);
		xoa(da->id);
	} while( strlen(da->id) > 5  );
	printf("\nNhap Ten Cau Thu: ");
	fflush(stdin);
	fgets(da->fullname, sizeof(da->fullname), stdin);
	xoa(da->fullname);

	printf("\n");
}

void in(DA da) {
	printf("%5s \t %20s  ", da.id, da.fullname);
	printf("\n");
}

void ds_cau_thu(DA ds[], int *n) {
	do {
		printf("\nNhap so luong cau thu: ");
		scanf("%d", n);
	} while(n<=0);
	//nhap_cau_thu2();
	for(i=0; i<*n; i++) {
		printf("\nNhap vao cau thu : %d", i);
		nhap(&ds[i]);
	}

}

void xuat_ds(DA ds[], int n) {
	printf("%5s \t %20s  ", "Ma", "Ho Ten");
	printf("\n");
	for(i=0; i<n; i++) {
		in(ds[i]);
	}


}

int main() {
	int  n;
	DA ds[50];
	ds_cau_thu(ds, &n);
	xuat_ds(ds, n);

}
