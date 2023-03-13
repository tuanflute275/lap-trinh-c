#include <stdio.h>
#include "math.h"


//struct time {
//	int gio;
//	int phut;
//	int giay;
//};

//
#include "stdio.h"
#include "math.h"
 typedef struct PhanSo{
	int tuSo;
	int mauSo;
}PhanSo;


void rutGon(PhanSo *ps){
	// Tim USCLN
	int a = ps->tuSo;
	int b = ps->mauSo;

	a = abs(a);
	b = abs(b);
	
	int USCLN =1;
	// TH1
	if(a==0 || b==0){
		USCLN = (a+b);
	}else{
	//TH2
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		USCLN = a;	
	}
	ps->tuSo/=USCLN;
	ps->mauSo/=USCLN;
}

void nhapPhanSo(PhanSo *ps){
	printf("\nNhap vao tu so: ");
	scanf("%d", &ps->tuSo);
	do{
		printf("\nNhap vao mau so: ");
		scanf("%d", &ps->mauSo);
	}while(ps->mauSo==0);
}

void inPhanSo(PhanSo ps){
	if(ps.mauSo<0){
		ps.tuSo*=-1;
		ps.mauSo*=-1;
	}
	rutGon(&ps);
	if(ps.mauSo==1){
		printf("%d", ps.tuSo);
	}else{
		printf("%d/%d", ps.tuSo, ps.mauSo);
	}

}

int main(){
	PhanSo ps1, ps2;
	printf("\nPhan so thu nhat: ");
	nhapPhanSo(&ps1);
	printf("\nPhan so thu hai: ");
	nhapPhanSo(&ps2);
	printf("\nPhan so vua nhap la: ");
	inPhanSo(ps1);
	printf("\t");
	inPhanSo(ps2);
}

//	 struct time t;
//	printf("nhap vao gio: ");
//	scanf("%d", &t.gio);
//	printf("nhap vao phut: ");
//	scanf("%d", &t.phut);
//	printf("nhap vao giay: ");
//	scanf("%d", &t.giay);
//
//	printf("gio da nhap la: %d:%d:%d", t.gio, t.phut, t.giay);
//}

