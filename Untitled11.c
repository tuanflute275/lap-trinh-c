#include"stdio.h"

int main(){
	
	FILE *p;
	char s[]="xin chao cac ban!";
	p=fopen("baitap.txt", "w+");
	fwirte(s, sizeof(s), 1, p);
	fclose(p);
}
