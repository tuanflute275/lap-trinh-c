#include"stdio.h"
#include"conio.h"

int main() {

		int luachon;
		
		do{
			printf("\n\n\n\t==menu bai tap ==\n0. chuong trinh viet danh sach\n1. chuong trinh thuc hien in ra man hinh. \n2. chuong trinh tinh chu vi va dien tich. "
			"\n3. chuong trinh tinh tong diem va diem trung binh 3 mon. \n4. chuong trinh tinh tong diem va diem trung binh co he so."
			"\n5. chuong trinh nhap ban kinh tinh dien tich va the tich"
			"\n6. chuong trinh tinh phep cong , tru , nhan , chia. \n7. chuong trinh nhap 2 so va doi gia tri"
			"\n8. chuong trinh nhap ba so va in ra hang tram -chuc-don vi"
			"\n9. chuong trinh nhap 4 so va tinh tong cac so do. \n10.chuong trinh dao nguoc so co hai so\n");
			printf("\n Moi ban chon bai tap can thuc hien:  ");
			scanf("%d", &luachon);
			printf("\n");
			switch(luachon) {
				case 0: {
				printf("\tDANH SACH SINH VIEN\n\a ");
	printf("----------------------------------------------\n");
	printf("| STT  | HO VA TEN          |   SO DIEN THOAI |\n");
	printf(" ----------------------------------------------\n");
	printf("| 001  | NGUYEN VAN T       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 002  | NGUYEN VAN U       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 003  | NGUYEN VAN A       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 004  | NGUYEN VAN N       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 005  | NGUYEN VAN F       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 006  | NGUYEN VAN L       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 007  | NGUYEN VAN U       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 008  | NGUYEN VAN T       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 009  | NGUYEN VAN E       |   0386564543    |\n");
	printf(" ----------------------------------------------\n");
	printf("| 010  | NGUYEN VAN 275     |   0386564543    |\n");
	printf("-----------------------------------------------");
					break;
				}
				case 1:{
	printf("=====BACHKHOA APTECH.EDU.VN=====\n\a");
	printf("---------------o0o----------------\n");
	printf("======= DON LY DI =======\n");
	printf("TEN TOI LA: LUNG VAN CHEO\n");
	printf("NAM NAY TOI:18 TUOI\n");
	printf("TOI CO VO LA: LO VAN THAM\n");
	printf("Hom nay toi viet don nay cin duoc ly dy vo toi\n");
	printf("Ly do la vi hom di bat vo toi khong mang du trau nen gio toi doi ma toi khong co trau de dua cho vo toi\n"); break;}
				case 2:{
					int a,b,chu_vi,dien_tich;
	
	printf("Moi ban nhap hai canh a va b: ");
	scanf("%d%d", &a,&b);
	chu_vi=(a+b)*2;
	dien_tich=a*b;
	printf("\n  chu vi  = %d",chu_vi);
	printf("\ndien tich = %d",dien_tich); break;}
					
				case 3:{
					int diem_toan ,diem_ly ,diem_hoa ;
		printf("nhap diem 3 mon toan ,ly va hoa :  ");
		scanf("%d%d%d", &diem_toan ,&diem_ly ,&diem_hoa);
		
		int tong    = diem_toan + diem_ly + diem_hoa;
		int diem_tb = (diem_toan + diem_ly + diem_hoa)/3;;
		printf("diem_tong :  %d + %d + %d      = %d \n", diem_toan ,diem_ly ,diem_hoa, tong );
		printf("diem_tbc  :(%d + %d + %d ) / 3 = %d \n", diem_toan ,diem_ly ,diem_hoa, diem_tb);
					break;}
						
				case 4:{
					int diem_toan ,diem_ly ,diem_hoa ;
		printf("nhap diem 3 mon toan ,ly va hoa : \a ");
		scanf("%d%d%d", &diem_toan ,&diem_ly ,&diem_hoa);
		
		int tong    = diem_toan + diem_ly + diem_hoa;
		int diem_tb = (diem_toan*3 + diem_ly*2 + diem_hoa*1)/6;;
		printf("diem_tong :  %d + %d + %d      = %d \n", diem_toan ,diem_ly ,diem_hoa, tong );
		printf("diem_tbc  :(%d*3 + %d*2 + %d*1 ) / 6 = %d \n", diem_toan ,diem_ly ,diem_hoa, diem_tb);
					break;
				}
				case 5:{
			float pi = 3.14;
			float r, dien_tich, the_tich;
			printf("nhap vao ban kinh: ");
			scanf("%f", &r);
			dien_tich = 4*pi*r*r;
			the_tich = (4/3)*pi*r*r*r;
		printf("\nDien tich hinh cau la: %0.3f", dien_tich);
		printf("\nDien tich hinh cau la: %0.3f", the_tich);
					break;}
				
				case 6:{
					int a ,b ;
	  printf("nhap vao hai so nguyen : ");
	  scanf("%d%d", &a, &b);
	  
	  int sum = a + b;
	  int mul = a * b;
	  int div = a / b;
	  
	  printf("tong   %d + %d = %d\n", a ,b ,sum);
	  printf("hieu   %d - %d = %d\n", a, b, a-b);
	  printf("tich   %d * %d = %d\n", a ,b ,mul);
	  printf("thuong %d / %d = %d\n", a ,b ,div);
					break;}
				
				case 7:{
					int a,b,tam;
		printf("nhap vao hai so: ");
		scanf("%d%d", &a ,&b);
		tam=b;
		b=a;
		a=tam;
		printf("so a la:%d \n\a",a);
		printf("so b la:%d \n",b);
					break;
				}
				case 8:{
					int a;
		printf("nhap so co ba chu so: ");
		scanf("%d", &a);
		int c = a % 1000 /100;
		int b = a % 100 /10;
		int d = a % 10;
		  printf("chu so hang tram la  : %d\n", c);
		  printf("chu so hang chuc la  : %d\n", b);
		  printf("chu so hang don vi la: %d\n", d);
					break;}
				
				case 9:{
					int x;
		printf("nhap so nguyen duong co bon chu so: ");
		scanf("%d", &x );
		int a = x % 10000 /1000;
		int b = x % 1000 /100;
		int c = x % 100 /10;
		int d = x % 10;
		int tong = a + b + c + d;
		  printf("tong cac so : %d + %d + %d + %d = %d", a, b ,c , d, tong);
					break;}
				
				case 10:{
				int x;
		printf("\anhap so nguyen n (co hai chu so): ");
		scanf("%d", &x );
		int a = x % 100 /10; 
		int b = x % 10;
		printf("so dao nguoc cua so ban dau la  : %d%d", b ,a);
				break;}
				} }
				while(luachon < 11 &&luachon >= 0 );
				printf("VUI LONG CHON PHUONG AN CO TRONG MENU BAI TAP \a");
				
				
		
			}




