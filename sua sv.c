#include<stdio.h>
int i, j;
void Nhap(int a[], int n)//ham nhap mang
{
    for( i=0; i<n ; i++)//vong lap for duyet phan tu trong mang tu 0 den n-1
    {
        //nhap du lieu vao mang
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n)//ham xuat mang
{
    for(i=0; i<n ; i++)//vong lap for duyet phan tu trong mang 0 den n-1
    {
        //hien thi cac phan tu trong mang
        printf("%d \t", a[i]);
    }
}
void SuaPhanTu(int a[], int n)//ham sua phan tu
{
    int x;//khai bao vi tri muon sua
    printf("\nNhap vi tri muon sua:");
    scanf("%d", &x);
    int y;//khai bao gia tri sua
    printf("\nNhap gia tri muon sua:");
    scanf("%d", &y);
    if(x<0)//khong co phan tu trong mang
    {
        printf("Khong the sua mang rong!");
        return;
    }else if(x>=n)//vi tri muon sua nam ngoai mang
    {
        printf("vi tri nam ngoai mang!");
        return;
    }
    for(i=0; i<n ; i++)
    {
        if(i==x)
        {
            a[i]=y;
        }    
    }
    printf("\nMang sau khi sua la:\n");
    Xuat(a,n);//goi ham xuat mang    
}
int main()
{
    int a[100];// khai bao mang so nguyen co 100 o nho
    int n;//khai bao so nguyen n la so phan tu cua mang
    //Nhap du lieu cua n
    do{
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);//dieu kien neu n<1 hoac n>100 yeu cau nhap lai
    
    Nhap(a, n);//goi ham nhap mang
    printf("\nCac phan tu trong mang la:\n");
    Xuat(a,n);// goi ham xuat mang
    SuaPhanTu(a,n);//goi ham sua phan tu
}
