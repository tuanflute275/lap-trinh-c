
#include<stdio.h>
#include<conio.h>

int main() {
	int i,n,a[50];
	int check=1;
	printf(" Moi ban nhap so phan tu cua mang la: ");
	scanf("%d",&n);

	for(i=0; i<n; i++) {
		printf(" a[%d]=",i);
		scanf("%d", &a[i]);
	}

	if (a[i] < 2) {
		printf("So %d khong phai la so nguyen to", a[i]);
	} else if (a[i] == 2) {
		printf("So %d la so nguyen to chan duy nhat", a[i]);
	} else {

// khai bao bien y 
		int y;
	// thieus dong for i de duyet mang
		for(i=0; i<n; i++) {
			
			// gan lai bien check bang 1
			// neu khong no se luu mai gia tri check bang 0 
			//nen can gan lai gia tri check
			
	// vong for y de duyet phan tu mang
			for (y = 2; y < a[i]; y ++) {
				if (a[i] % y == 0) {
					check = 0;
					break;
				}
			}

			if (check == 0) {
				printf("So %d khong phai la so nguyen to\n", a[i]);
			} else {
				printf("So %d la so nguyen to\n", a[i]);
			}
		}
	}


}

