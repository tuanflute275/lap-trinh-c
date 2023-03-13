#include"stdio.h"
int menu() {
printf("\nMOI BAN CHON CAU HOI ??");
printf(" 0. thoat");
printf("\ncau so 1");
printf("\ncau so 2");
printf("\ncau so 3");
printf("\ncau so 4");
printf("\ncau so 5");
printf("\ncau so 6");
printf("\ncau so 7");
printf("\ncau so 8");
printf("\ncau so 9");
printf("\ncau so 10");

}
int question_1() {
	int a;
	printf("\ncau hoi 1: vua bang hot quyt , duoi dat ngam chau la con gi ?\n");
	printf(" 1. con vit\n ");
	printf("2. con bo \n");
	printf(" 3. con dom dom\n ");
	printf("4.con trau \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &a);

	switch(a) {
		case 1 :
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 3:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	}
}
// CAU HOI SO 2
int question_2() {
	int b;
	printf("\ncau hoi 2: Toi co 4 cai chan , 1 cai lung nhung khong co co the . toi la ai ?\n");
	printf(" 1. cai ban\n ");
	printf("2. cai ghe\n");
	printf(" 3. cai chau\n ");
	printf("4. cai choi\n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &b);

	switch(b) {
		case 1:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	}
}
// cau hoi so 3
int question_3() {
	int c;
	printf("\ncau hoi 3: nang lua mua dau toi dau bo ban , toi lua tat den sao sao ban lai bo toi ?\n");
	printf(" 1. cai chao\n ");
	printf("2. cai bong \n");
	printf(" 3. cai xo\n ");
	printf("4. cai choi\n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &c);

	switch(c) {
		case 1:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 2:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	}
}
//cau 4
int question_4() {
	int d;
	printf("\ncau hoi 4: vi tao phai danh tao, vi tao tao phai danh may . hoi dang lam gi ?\n");
	printf(" 1. rua bat\n ");
	printf("2. nhat rau\n");
	printf(" 3. dap muoi\n ");
	printf("4. quet nha \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &d);

	switch(d) {
		case 1:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 3:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	}
}
// cau 5
int question_5() {
	int e;
	printf("\ncau hoi 5: hot de song : mot ten .hot nau len : ten khac . Trong nha nong cac bac . Deu co mat ca hai ?\n");
	printf(" 1. hat cat\n ");
	printf("2. vien soi\n");
	printf(" 3. vien keo\n ");
	printf("4. hot gao \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &e);

	switch(e) {
		case 1:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		case 4:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		
	}
}
// cau hoi so 6
int question_6() {
	int f;
	printf("\ncau hoi 6: mat gi tron tria tren cao , toa ra nung anh nang dao dep thay  ?\n");
	printf(" 1. mat dat\n ");
	printf("2. mat troi\n");
	printf(" 3. mat trang\n ");
	printf("4. mat meo \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &f);

	switch(f) {
		case 1:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 2:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		
	}
}
// cau hoi 7
int question_7() {
	int g;
	printf("\ncau hoi 7: qua gi lac nhe, dau dau cung ren  ?\n");
	printf(" 1. qua nho\n ");
	printf("2. qua buoi\n");
	printf(" 3. qua ta\n ");
	printf("4. qua chuong \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &g);

	switch(g) {
		case 1:
			printf("\ndap an ban chon khong chinh xac !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	    case 4:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		
	}
}
// cau 8
int question_8() {
	int h;
	printf("\ncau hoi 8: qua gi gang sat duc nen , he nghe tieng ru nguoi lien nup mau  ?\n");
	printf(" 1. qua bom\n ");
	printf("2. qua buoi\n");
	printf(" 3. qua ta\n ");
	printf("4. qua chuong \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &h);

	switch(h) {
		 case 1:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	    case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		
	}
}
// cau 9
int question_9() {
	int i;
	printf("\ncau hoi 9:than em thi nho ti ti  ?\n");
	printf("\n cac ba , cac chi, cac di deu thuong\n");
	printf("\nem di, em em lai bon phuong\n");
	printf("\ndoc ngang lam loi , lach luon nhieu noi\n");
	printf("\ntam than hien tron cho nguoi\n");
	printf("\nsang hen chang che chuong, giup nguoi chang quan cong\n");
	printf(" 1. cay kim\n ");
	printf("2. cay quat\n");
	printf(" 3. cay bang\n ");
	printf("4. cay dua \n\n");
	printf("\tMOI BAN CHON DAP AN : ");
	scanf("%d", &i);

	switch(i) {
		 case 1:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 2:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	    case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		
	}
}
//cau 10
int question_10() {
	int k;
	printf("\ncau hoi 10: cay kho mot la bon na canh \n");
	printf("\nduong di khuc khuyu nhoc tay anh\n");
	printf("\ngap ke tieu nhan buon chang noi \n");
	printf("\ncho nguoi quan tu moi duong danh\n");
	printf(" \n1. cay choi\n ");
	printf("2. cay dan\n");
	printf(" 3. cay bang\n ");
	printf("4. cay dua \n\n");
	printf("\n\tMOI BAN CHON DAP AN : ");
	scanf("%d", &k);

	switch(k) {
		case 1:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		case 2:
			printf("\a\n CHUC MUNG DAP AN BAN CHON CHINH XAC !");
			break;
		case 3:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
	    case 4:
			printf("\ndap an ban chon khong chinh xac !\n");
			break;
		
	}
}
int main() {
		int luachon;
	do{
	menu();

	printf("\n");
	printf("\n Moi ban chon bai tap can thuc hien: ");
	scanf("%d", &luachon);

	switch(luachon) {
		case 0: 
			exit(0);
		case 1: 
			question_1();
			break;	
		case 2:
			question_2();
			break;
		case 3:
			question_3();
			break;
		case 4:
			question_4();
			break;
		case 5:
			question_5();
			break;
		case 6:
			question_6();
			break;
		case 7:
			question_7();
			break;
		case 8:
			question_8();
			break;
		case 9:
			question_9();
			break;
		case 10:
			question_10();
			break;
	}
} while( luachon != 0);

	}

