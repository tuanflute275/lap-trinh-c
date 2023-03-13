#include"stdio.h"
int a[50],n,chon,tong =0, i, j;
void menu(){
    printf("\n---MENU-----");
    printf("\n1.Nhap so phan tu va gia tri mang 1 chieu");
    printf("\n2.In ra man hinh mang vua nhap");
    printf("\n3.Tim ra so lon nhat va so nho nhat trong mang");
    printf("\n4.Tim ra so nguyen to trong mang");
    printf("\n5.Sap xep mang tang dan va giam dan");
    printf("\n6.Tinh tong cac so chan va in ra tong do cung cac uoc cua tong");
    printf("\n7.In ra man hinh cac so chia het cho 3 va 4");
    printf("\n8.Thoat");
    printf("\nSu lua chon cua ban la: ");
    scanf("%d", &chon);
}

int nhap_mang(int a[50], int *n){
    printf("\nNHap so phan tu cua mang: ");
    scanf("%d", n);
    for(i=0;i<*n;i++){
        printf("array[%d]=", i);
        scanf("%d", &a[i]);
    }
}
void xuat_mang(int a[50], int n){
    printf("\nMang vua nhap la:" );
    for(i=0; i<n;i++){
        printf("%3d", a[i]);
    }
}

int tim_max_min(int a[50], int n){
    int max = a[0];
    int min = a[0];

    for(i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }

         if(min > a[i]){
            min = a[i];
        }


    }
    printf("\nMAX = %d,   MIN = %d", max , min);
}


void sap_xep_giam(int a[50], int n){
    int tg;
     for( i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }


    printf("\nMang sap xep giam dan la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}


void sap_xep_tang(int a[50], int n){
    int temp;
     for( i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    printf("\nMang sap xep tang dan la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}

int tinh_tong(int a[50], int *n){
    for(i=0;i<*n;i++){
        if(a[i] % 2 == 0){
            tong+=a[i];
        }
    }
         printf("\nTong cac so chan la: %d ", tong);
}
int tim_uoc(int a[50], int *n){
    printf("\nCac uoc cua tong la: ");
    for(i=0;i<*n;i++){
        if(tong % a[i] == 0){
            printf("%3d", a[i]);
        }
    }
}
int so_chia_het(int a[50], int *n){
    printf("\nCac so chia het cho 3 va 4 la: ");
    for(i=0;i<*n;i++){
        if(a[i]%12==0){
            printf("%2d", a[i]);
        }else{
            printf("\nFalse ");
        }
    }
}


int main(){
    do{
        menu();
    switch(chon){
        case 1:
            nhap_mang(a, &n);
            break;
        case 2:
            xuat_mang(a, n);
            break;
        case 3:
            timMax(a, n);
            break;
        case 4:
            break;
        case 5:
            sap_xep_tang(a, n);
            sap_xep_giam(a, n);
            break;
        case 6:
            tinh_tong(a, &n);
            break;
        case 7:
            so_chia_het(a, &n);
            break;
        case 8:
            exit(0);
            break;


    }
    }while(chon != 0);
}
