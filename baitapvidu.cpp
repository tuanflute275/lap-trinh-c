#include<stdio.h>
#include<conio.h>

int main() {
	
	int a, i; 
	int y [i];
	int luachon; 
	printf("-------------- Danh sach Menu -------------- \n ");
	printf("\n 1. Nhao vao so phan tu va nhap gia tri cho phan tu mang 1 chieu");
	printf("\n 2. In ra danh sach cac phan tu trong mang");
	printf("\n 3. Tinh tong gia tri cac phan tu trong mang");
	printf("\n 4. In ra cac phan tu chia het cho 3 va 4");
	printf("\n 5. Tim gia tri lon nhat trong mang") ;
	printf("\n 6. Sap xep mang tang dan");
	printf("\n 7. In ra so phan tu chan, le trong mang");
	printf("\n 8. Exit");
	printf("\n Moi ban lua chon "); 
	scanf("%d", &luachon) ; 
	
	switch(luachon){
		
		
			case 1:	 
				printf (" So phan tu cua mang la ");
				scanf("%d", &a); 
				for (i=0; i<a; i++){	 
				printf (" \n Gia tri phan tu %d trong mang la: ", i );
				scanf("%d", &y[i]);  
				}
		break;
	//Ket thuc lua chon 1
	
			case 2:
				printf("\n Cac phan tu trong mang la : ");  
				for (i=0; i<a; i++){
				printf("%4d  ", y[i]); 
				}
		
		break;
	//Ket thuc lua chon 2
	
			case 3:
		
		break; 
	//Ket thuc lua chon 3
	
			case 4:
		
		break;
	//Ket thuc lua chon 4 
	
			case 5:
		
		break; 
	//Ket thuc lua chon 5
	
			case 6:
		
		break;
	//Ket thuc lua chon 6 
	
			case 7:
		
		break;
	 //Ket thuc lua chon 7
	 
	 		case 8:
		
		break;
	//Ket thuc lua chon 8  
	 
	  
		} 
	}
	
