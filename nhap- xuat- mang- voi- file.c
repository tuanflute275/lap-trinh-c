
#include "stdio.h"
#include "stdlib.h"
int i;
void nhapMang(int x[], int *n){
	do {
		printf("\nNhap vao n:");
		scanf("%d", &n);
	}while(n<=0);
	for(i=0; i<n; i++){
		printf("\nX[%d]=", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[], int n){
	for(i=0; i<n; i++){
		printf("\nX[%d]=%d", i, x[i]);
	}
}
void xuatFile(int x[], int n, char tenFile[50]){
	FILE *f;
	f = fopen(tenFile, "w");
	if(f==NULL){
		printf("\n Loi mo file");
		return;
	}
	fprintf(f, "%d\n", n);
	for(i=0; i<n; i++){
		fprintf(f, "%d\n", x[i]);
	}
	fclose(f);
}

void xuatFile2(int x[], int n, char tenFile[50]){
	FILE *f;
	f = fopen(tenFile, "w");
	if(f==NULL){
		printf("\n Loi mo file");
		return;
	}
	for(i=0; i<n; i++){
		fprintf(f, "%d\n", x[i]);
	}
	fclose(f);
}

void nhapFile(int x[], int *n, char tenFile[50]){
	FILE *f;
	f = fopen(tenFile, "r");
	if(f==NULL){
		printf("\n Loi mo file");
		return;
	}
	fscanf(f, "%d", &n);
	printf("%d",n);
	for(i=0; i<n; i++){
		fscanf(f, "%d", &x[i]);
	}
	fclose(f);
}

void nhapFile2(int x[], int *n, char tenFile[50]){
	FILE *f;
	f = fopen(tenFile, "r");
	if(f==NULL){
		printf("\n Loi mo file");
		return;
	}
	int i=0;
	while(!feof(f)){
		fscanf(f, "%d", &x[i]);
		i++;
	}
	n = i;
	
	fclose(f);
}
int main(){
	int a[100];
	int n;
	nhapMang(a, &n);
	xuatMang(a, &n);
	xuatFile(a, n, "Bai_90.out");
//	xuatFile2(a, n, "Bai_90_2.out");
//	nhapFile(a, n, "Bai_90.out");
//	xuatMang(a, n);
//	nhapFile2(a, &n, "Bai_90_2.out");
//	xuatMang(a, &n);
}
