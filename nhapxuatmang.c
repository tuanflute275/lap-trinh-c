#include <stdio.h>
#include <conio.h>
int a[1000],n,i, j;
int nhapMang() {
	printf("nhap so luong phan tu : ");
	scanf("%d", &n);
	for( i = 0;  i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int main() {
	nhapMang(a, n);

    for ( i = 0; i < n; i++) {
        for ( j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Neu arr[i] > arr[j] thi hoán ðoi giá tri cua arr[i] và arr[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n Mang sau khi sap xep tang dan :  ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

getch();
}


