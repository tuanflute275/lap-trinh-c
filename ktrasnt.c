#include<stdio.h>
#include<conio.h>
#include<math.h>
int i,k;
void nhapmang(float a[],int n)
{
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%f",&a[i]);
	}
}
void xuatmang(float a[],int n)
{
	for(i=0;i<n;i++)
	printf(" %6.2f ",a[i]);
}
int snt(float n)
{
	if(n<2) return 0;
	if(n==(int)n)
	{
		for(k=2;k<=sqrt(n);k++)
	    {
	    	if((int)n%k==0) return 0;
	    	else return 1;
		}
	}
	else return 0; 
}
main()
{
	int n;
	float a[100];
	printf("Nhap so phan tu n=");
	scanf("%d",&n);
	nhapmang(a,n);
	printf("Mang A la:");
	xuatmang(a,n);
	printf("\nCac so nguyen to trong mang A la:");
	for(i=0;i<n;i++)
	{
		if(snt(a[i])) printf(" %6.2f ",a[i]);
	}
}
