#include"stdio.h"

struct hocSinh {
	char *name;
	int age;
	int height;
	float weight;
};

int main() {
	struct hocSinh a, *pa;
	a.name="nguyen van a";
	a.age=18;
	a.height=165;
	a.weight=60;
	
	printf("\ntong quat hoc sinh \nname: %s \nage: %d \nheight: %dcm\nweight :%.1fkg ", a.name, a.age, a.height, a.weight);
	printf("\n-------------------");
	
	pa=&a;
		printf("\n\ntong quat hoc sinh \nname: %s \nage: %d \nheight: %dcm\nweight :%.1fkg ", pa->name, pa->age, pa->height, pa->weight);
	
}
