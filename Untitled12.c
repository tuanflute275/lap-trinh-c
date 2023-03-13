#include"stdio.h"

int main(){
	
	FILE *p;
	char s[]="xin chao cac ban!";
	char s1[30];
	p=fopen("bai_275.txt", "w+");
	fwrite(s, sizeof(s), 1, p);
	fseek(p, SEEK_SET, 0);
	fread(s1, sizeof(s1), 1, p);
	printf("%s", s1);
	fclose(p);
	return 0;
}
