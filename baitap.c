#include"stdio.h"
#include"conio.h"

void main() {
	int luachon;
		    printf("\n\n\n\t==menu bai tap ==\n0. chuong trinh kiem tra chan le\n1. chuong trinh phep cong tru nhan chia. "
			"\n2. chuong trinh tinh diem trung binh va xep loai. "
			"\n3. chuong trinh kiem tra xem la tam giac gi. \n4. chuong trinh tinh tien dien."
			"\n5. chuong trinh kiem tra ngay cua thang"
			"\n6. chuong trinh kiem tra ngay thang nam co hop le. \n7. chuong trinh kiem tra gio phut giay"
			"\n8. chuong trinh sap xep tang giam"
			"\n9. chuong trinh doc so . \n10.chuong trinh tinh luong cong nhan\n");
			printf("\n Moi ban chon bai tap can thuc hien:  ");
			scanf("%d", &luachon);
			printf("\n");
			switch(luachon){
					case 0:{
				int n;
			 printf("nhap vao n: ");
			 scanf("%d", &n);
			 
			 if(n%2==0){
			 printf("so %d la so chan\n", n);
			 }else {
			 	printf("so %d a so le\n", n);
			 }
			 
			 if(n%3==0 && n%3==0) {
			 	printf("so %d la so chia het cho ca 3 va 5\n ");
			 } else {
			 	printf("so %d la so KHONG chia het cho 3 va 5\n");
			 }
					break;}
					
					
					case 1:{
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
				
					case 2:{
					float diem_toan ,diem_ly ,diem_hoa ;
		printf("nhap diem 3 mon toan ,ly va hoa :  ");
		scanf("%f%f%f", &diem_toan ,&diem_ly ,&diem_hoa);
		
		float tong    = diem_toan + diem_ly + diem_hoa;
		float diem_tb = (diem_toan + diem_ly + diem_hoa)/3;;
		printf("diem_tong 3 mon  :  %0.2f + %0.2f + %0.2f      = %0.3lf \n", diem_toan ,diem_ly ,diem_hoa, tong );
		printf("trung binh diem  :(%0.2f + %0.2f + %0.2f ) / 3 = %0.3lf \n", diem_toan ,diem_ly ,diem_hoa, diem_tb);

		if(diem_tb < 5 ){
			printf("\n\txep loai yeu can co gang");
		}else if(diem_tb >= 5 && diem_tb <6.5 ) {
			printf("\n\txep loai trung binh can co gang");
		}else if(diem_tb >= 6.5 && diem_tb < 8) {
			printf("\n\txep loai kha rat tot");	
		}else if(diem_tb >= 8 && diem_tb < 10) {
			printf("\n\txep loai gioi verry good");	
		}
					break;}
					
						
				case 3:{
					int a ,b ,c ;
		printf("nhap vao ba canh cua tam giac : ");
		scanf("%d%d%d", &a ,&b ,&c);
		
		if(a==b && b==c) {
			printf("day la tam giac deu ");
		} else if(a==b && a==c || b==c) {
			printf("day la tam giac can");
		}else  if( a<b+c && b<a+c && c<a+b ){
	        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
	            printf("Day la tam giac vuong");}
	        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
	            printf("Day la tam giac tu");    
	       
			else{
			printf("ba canh a ,b ,c KHONG PHAI la ba canh cua mot tam giac");}
					break;}
					
				case 4:{
		int tien,kWh;
		int a ,b ;
		printf("nhap chi so cu:  ");
		scanf("%d", &a);
		printf("nhap chi so moi : ");
		scanf("%d", &b);
		int sub = a - b;
		printf("tong so kwh la: %d\n", sub);
		
	    printf("nhap so kw tieu thu: ");
	    scanf("%d",&kWh);
	    if(kWh<=50) tien=kWh*1000;
	    if(kWh >=51 && kWh <=100) tien=kWh*2000;
	    if(kWh >= 101) tien=kWh * 3500;
	    printf("so tien phai tra la : %dvnd\n", tien);
					break;}
					
			 	case 5:{
					int thang, nam;
	printf("nhap thang =  ");
	scanf("%d", &thang);
	printf("nhap nam =" );
	scanf("%d", &nam);
	
	switch(thang){
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
			if(nam%400==0 || nam%4==0 && nam!=0){
				printf("thang co 29 ngay ");
			}else{
				printf("thang co 28 ngay ");
			} 
			break;
	default :
		printf("nhap du lieu khong dung");
					
					break; }}
					
					
					
           	case 6:{
	int ngay, thang, nam;
	int ngay_cua_thang;
	printf("nhap ngay =  ");
	scanf("%d", &ngay);
	
	printf("nhap thang =  ");
	scanf("%d", &thang);
	
	printf("nhap nam =" );
	scanf("%d", &nam);
	 if (nam<0 || thang<0 || thang> 12 || ngay<0 || ngay> 31)
    {
    printf("Ngay khong hop le");
    }
	
	switch(thang)
	{
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
			if(nam%400==0 || nam%4==0 && nam%100 !=0)
			{
				ngay_cua_thang = 29;
				printf("thang co 29 ngay ");
			}
			else
			{
			ngay_cua_thang = 28;
			printf("thang co 28 ngay ");
			} 
			break;
	if(nam>0 &&(thang>0 && thang<=12) && (ngay > 0 &&ngay<=ngay_cua_thang))
	{
		printf("===========================\n");
		printf("nhap ngay thang hop le\n");
		printf("ngay thang da nhap: ngay %d thang %d nam %d\n", ngay, thang, nam);
	}
	else
	{
		printf("===========================\n");
		printf("nhap ngay thang hop le\n");
		}}	
					break;}
					
					
			case 7:{
					int gio1 ,gio2 ,phut1 ,phut2 ,giay1 ,giay2, s ,h ,m;
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
	
	s = giay1 + giay2;
	m = phut1 + phut2;
	h = gio1 + gio2;
	
	if(((gio1>=0) && (gio1<=23)) && ((phut1>=0) && (phut1<=59)) && ((giay1>=0) && (giay1<=59))) 
	{
		if(((gio2>=0) && (gio2<=23)) && ((phut2>=0) && (phut2<=59)) && ((giay2>=0) && (giay2<=59))) 
		{
			if(s>60)
	 {
			s = s - 60;
			m++;
	}
		if(m>60) 
		{
			m = m - 60;
			h++;
		}
		printf("===========================\n");
		printf("nhap gio phut hop le\n");
		printf("thoi gian da nhap: %d gio %d phut %d giay\n", h ,m ,s);}
}
		
else
      { 
	    printf("===========================\n");
		printf("nhap gio phut hop le\n");
	
		}
					break;}
					
				case 8:{
					printf("con bai 8 chua lam dc ");
					break;
				}
					
			case 9:{
				float a;
	printf("nhap mot so : ");
	scanf("%f", &a);
	printf("so %0.3f ", a);
			break;}
			
			case 10:{
					float luong, so_gio, c;
printf("nhap vao luong co ban: ");
scanf("%f", &luong);
printf("nhap vao so gio lam: ");
scanf("%f", &so_gio);
printf("luong co ban cua cong nhan la:%0.2fVND\n", luong);
printf("so gio cong nhan lam viec la :%0.2fh\n", so_gio);
float mul = luong * so_gio;
printf("tong tien cong nhan duoc nhan la: %0.2fVND", mul);


if(so_gio > 35)
{
float sub = (so_gio - 35) * (1.5 * luong);
printf("\nluong duoc thuong them la : %0.2fVNd", sub);	
}
				break;}
				
				
				
				
}	return 0;
	getch();
}


	
	
	
	
	
