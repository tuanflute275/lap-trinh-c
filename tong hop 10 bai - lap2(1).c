#include <stdio.h>
#include <conio.h>
#include <math.h>

// ham hien thi menu
void menu(){
	printf("\n\n\n\t==menu bai tap ==\n");
	printf("0. chuong trinh kiem tra chan le\n1. chuong trinh phep cong tru nhan chia.");
	printf("\n2. chuong trinh tinh diem trung binh va xep loai. ");
	printf("\n3. chuong trinh kiem tra xem la tam giac gi. \n4. chuong trinh tinh tien dien.");
	printf("\n5. chuong trinh kiem tra ngay cua thang");
	printf("\n6. chuong trinh kiem tra ngay thang nam co hop le. \n7. chuong trinh kiem tra gio phut giay");
	printf("\n8. chuong trinh sap xep tang giam \n9. chuong trinh doc so . \n10.chuong trinh tinh luong cong nhan\n");
}
// bai 1
void b1 (){
	int n;
	printf("nhap vao n: ");
 	scanf("%d", &n);
 	
	if(n%2==0){
		printf("so %d la so chan\n", n);
	}else {
		printf("so %d a so le\n", n);
	}
	
	if(n%3==0 && n%3==0) {
		printf("so %d la so chia het cho ca 3 va 5\n ", n);
	} else {
		printf("so %d la so KHONG chia het cho 3 va 5\n", n);
	}
}

void summ(int a, int b){
	int sum = 0;
	sum = a + b;
	printf("tong  %d + %d = %d\n", a ,b ,sum);
}

void subb(int a, int b){
	int sub = 0;
	sub = a - b;
	printf("Hieu  %d - %d = %d\n", a ,b ,sub);
}

void mull(int a, int b){
	int mul = 0;
	mul = a * b;
	printf("Tich  %d * %d = %d\n", a ,b ,mul);
}

void divv(int a, int b){
	int div = 0;
	div = a / b;
	printf("Thuong %d / %d = %d", a ,b ,div);
}

void b2 () {
	int a ,b;
	printf("nhap vao hai so nguyen : ");
	scanf("%d%d", &a, &b);
	summ(a, b);
	subb(a, b);
	mull(a, b);
	divv(a, b);
}

void b3(){
	float diem_toan ,diem_ly ,diem_hoa ;
	printf("nhap diem 3 mon toan ,ly va hoa :  ");
	scanf("%f%f%f", &diem_toan ,&diem_ly ,&diem_hoa);
			
	float tong    = diem_toan + diem_ly + diem_hoa;
	float diem_tb = ( diem_toan + diem_ly + diem_hoa ) / 3;
	printf("diem_tong 3 mon  :  %0.2f + %0.2f + %0.2f      = %0.3lf \n", diem_toan ,diem_ly ,diem_hoa, tong );
	printf("trung binh diem  :(%0.2f + %0.2f + %0.2f ) / 3 = %0.3lf \n", diem_toan ,diem_ly ,diem_hoa, diem_tb);
					
	if(diem_tb < 5 ){
		printf("\n\txep loai yeu can co gang");
	}else if(diem_tb >= 5 && diem_tb <6.5 ) {
		printf("\n\txep loai trung binh can co gang");
	}else if(diem_tb >= 6.5 && diem_tb < 8) {
		printf("\n\txep loai kha rat tot");	
	}else if(diem_tb >= 8 && diem_tb < 10) {
		printf("\n\txep loai gioi very good");	
	}
}

void b4(){
	int a ,b ,c ;
	printf("nhap vao ba canh cua tam giac : ");
	scanf("%d%d%d", &a ,&b ,&c);
					
	if(a==b && b==c) {
		printf("day la tam giac deu ");
	} else if(a==b && a==c || b==c) {
		printf("day la tam giac can");
	}else if( a<b+c && b<a+c && c<a+b ){
		if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
			printf("Day la tam giac vuong");
		}
	} else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b){
		printf("Day la tam giac tu");
	} else {
		printf("ba canh a ,b ,c KHONG PHAI la ba canh cua mot tam giac");
	}
}

void b5(){
	int tien,kWh;		
	int a ,b ;
	printf("nhap chi so cu:  ");
	scanf("%d", &a);
	printf("nhap chi so moi : ");
	scanf("%d", &b);
	int sub = b - a;
	printf("tong so kwh la: %d\n", sub);
	kWh = sub;
	if(kWh<=50) tien=kWh*1000;
	if(kWh >=51 && kWh <=100) tien=kWh*2000;
	if(kWh >= 101) tien=kWh * 3500;
	printf("so tien phai tra la : %dvnd\n", tien);
}

void b6(){
	int thang, nam;
	printf("nhap thang =  ");
	scanf("%d", &thang);
	printf("nhap nam =" );
	scanf("%d", &nam);
					
	switch(thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang %d co 31 ngay ", thang);
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang co 30 ngay ");
		break;
		case 2:
			if (nam % 400== 0 || nam %4 ==0 && nam != 0){
				printf("thang co 29 ngay ");
			}else{
				printf("thang co 28 ngay ");
			}
		break;
		default :
			printf("nhap du lieu khong dung");			
			break; 
		}
}

void b7(){
	int ngay, thang, nam;
	int ngay_cua_thang;
	printf("nhap ngay =  ");
	scanf("%d", &ngay);
					
	printf("nhap thang =  ");
	scanf("%d", &thang);
					
	printf("nhap nam =" );
	scanf("%d", &nam);
	if (nam<0 || thang<0 || thang> 12 || ngay<0 || ngay> 31){
		printf("Ngay khong hop le");
	}
	if(nam>0 &&(thang>0 && thang<=12) && (ngay > 0 &&ngay<=ngay_cua_thang)){
		printf("===========================\n");
		printf("nhap ngay thang hop le\n");
		printf("ngay thang da nhap: ngay %d thang %d nam %d\n", ngay, thang, nam);
	} else {
		printf("===========================\n");
		printf("nhap ngay thang hop le\n");
	}
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngay_cua_thang = 31;
			printf("thang co 31 ngay ");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngay_cua_thang = 30;
			printf("thang co 30 ngay ");
		break;
		case 2:
			if(nam%400==0 || nam%4==0 && nam%100 !=0){
				ngay_cua_thang = 29;
				printf("thang co 29 ngay ");
			} else {
				ngay_cua_thang = 28;
				printf("thang co 28 ngay ");
			} 
		break;
	}
}

void b8(){
	int gio1 ,gio2 ,phut1 ,phut2 ,giay1 ,giay2;
	printf("nhap vao gio thu nhat : ");
	scanf("%d", &gio1);
	printf("nhap vao gio thu hai : ");
	scanf("%d", &gio2);
	printf("nhap vao phut thu nhat : ");
	scanf("%d", &phut1);
	printf("nhap vao phut thu hai : ");
	scanf("%d", &phut2);
	printf("nhap vao giay thu nhat : ");
	scanf("%d", &giay1);
	printf("nhap vao giay thu hai : ");
	scanf("%d", &giay2);
	
	char s = (char) giay1 + (char) giay2;
	char m = (char) phut1 + (char) phut2;
	char h = (char) gio1 + (char) gio2;
	
	if(((gio1>=0) && (gio1<=23)) && ((phut1>=0) && (phut1<=59)) && ((giay1>=0) && (giay1<=59))) {
		if(((gio2>=0) && (gio2<=23)) && ((phut2>=0) && (phut2<=59)) && ((giay2>=0) && (giay2<=59))) {
			if(s>60){
				s = s - 60;
				m++;
			}
			if(m>60) {
				m = m - 60;
				h++;
			}
			printf("===========================\n");
			printf("nhap gio phut hop le\n");
			printf("thoi gian da nhap: %x gio %x phut %x giay\n", h ,m ,s);
		}
	} else { 
		printf("===========================\n");
		printf("nhap gio phut hop le\n");
	}
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void b9(){
	int a, b, c; 
    int temp;
 
    printf("Nhap 3 so \n");
    scanf("%d %d %d", &a, &b, &c);
 
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
 
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
 
   if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
 
    printf("\n%d    %d    %d", a, b, c);
   
}

void b10(){
	int n;
  	printf("\nNhap Vao So n: ");
  	scanf("%d", &n);
  	
  	// lay chu so hang tram
	int a = n / 100;
	
	// lay chu so hang chuc
	int b = (n / 10) % 10;
	
  	// lay ve hang don vi
	int c = n % 10;
	 
	
	
	// kiem tra hang tram(bien c)
	switch(a){
	    case 1: printf("Mot tram ");break;
	    case 2: printf("Hai tram ");break;
	    case 3: printf("Ba tram ");break;
	    case 4: printf("Bon tram ");break;
	    case 5: printf("Nam tram ");break;
	    case 6: printf("Sau tram ");break;
	    case 7: printf("Bay tram ");break;
	    case 8: printf("Tam tram ");break;
	    case 9: printf("Chin tram ");break;
	}
	    
	
	// kiem tra hang chuc (bien b)
	switch(b){
	    case 1: printf("muoi ");break;
	    case 2: printf("hai muoi ");break;
	    case 3: printf("ba muoi ");break;
	    case 4: printf("bon muoi ");break;
	    case 5: printf("nam muoi ");break;
	    case 6: printf("sau muoi ");break;
	    case 7: printf("bay muoi ");break;
	    case 8: printf("tam muoi ");break;
	    case 9: printf("chin muoi ");break;
	}
	
	// kiem tra hang don vi (bien a)
	switch(c){
	    case 1: printf("mot");break;
	    case 2: printf("hai ");break;
	    case 3: printf("ba ");break;
	    case 4: printf("bon ");break;
	    case 5: printf("nam ");break;
	    case 6: printf("sau ");break;
	    case 7: printf("bay ");break;
	    case 8: printf("tam ");break;
	    case 9: printf("chin ");break;
	}
}

void b11(){
	float luong, so_gio, c;
	printf("nhap vao luong co ban: ");
	scanf("%f", &luong);
	printf("nhap vao so gio lam: ");
	scanf("%f", &so_gio);
	printf("luong co ban cua cong nhan la:%0.2fVND\n", luong);
	printf("so gio cong nhan lam viec la :%0.2fh\n", so_gio);
	float mul = luong * so_gio;
	printf("tong tien cong nhan duoc nhan la: %0.2fVND", mul);

	if(so_gio > 35){
		float sub = (so_gio - 35) * (1.5 * luong);
		printf("\nluong duoc thuong them la : %0.2fVNd", sub);	
	}
}

void main(){
	menu();
	int luachon;
	printf("\n");
	printf("\n Moi ban chon bai tap can thuc hien: ");
	scanf("%d", &luachon);
	
	switch(luachon){
		case 0: {
			b1();
			break;
		}
		case 1: {
			b2();
			break;
		}
		case 2: {
			b3();
			break;
		}
		case 3:{
			b4();
			break;
		}
		case 4:{
			b5();
			break;
		}
		case 5:{
			b6();
			break;
		}
		case 6: {
			b7();
			break;
		}
		case 7: {
			b8();
			break;
		}
		case 8: {
			b9();
			break;
		}
		case 9:{
			b10();
			break;
		}
		case 10:{
			b11();
			break;
		}
	}
	getch();
}
