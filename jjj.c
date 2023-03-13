#include"stdio.h"
int nhapMang(int a[100], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

int timMax(int a[100], int n){
	int i;
	int max=a[0];
	for(i=0;i<n;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("\nMax = %d", max);
}
int main() {
	int a[100], n;
		printf("\nNhap vao n: ");
	scanf("%d", &n);
	
	nhapMang(a, n);
	timMax(a, n);
	
}
