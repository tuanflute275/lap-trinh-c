#include<stdio.h>
int i, j;
//khai bao mot cau truc sinh vien
typedef struct SinhVien{
    int MaSV;
    char TenSV[50];
    char Lop[50];
    float Dtoan;
    float Dvan;
    float Danh;
}SinhVien;
void Nhap(SinhVien sv[], int n)//ham nhap sinh vien
{
    for( i=0; i<n ; i++)//vong lap for duyet sinh vien trong mang tu 0 den n-1
    {
        //nhap du lieu vao mang
        printf("Nhap sinh vien thu %d",i);
        printf("\nNhap ma sinh vien:");
        scanf("%d", &sv[i].MaSV);
        printf("\nNhap ten sinh vien:");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("\nNhap lop:");
        gets(sv[i].Lop);
        fflush(stdin);
        printf("\nNhap diem toan:");
        scanf("%f", &sv[i].Dtoan);
        printf("\nNhap diem van:");
        scanf("%f", &sv[i].Dvan);
        printf("\nNhap diem tieng anh:");
        scanf("%f", &sv[i].Danh);
    }
}
void Xuat(SinhVien sv[], int n)//ham xuat sinh vien
{
    printf("MaSV \t TenSV \t Lop \t Toan \t Van \t Anh \t DTB\n");
    for( i=0; i<n ; i++)//vong lap for duyet sinh vien trong mang 0 den n-1
    {
        //hien thi cac sinh vien trong mang
        printf("%d \t %s \t %s \t %0.2f \t %0.2f \t %0.2f \t %0.2f\n", sv[i].MaSV, sv[i].TenSV, sv[i].Lop, sv[i].Dtoan , sv[i].Dvan , sv[i].Danh, (sv[i].Dtoan + sv[i].Dvan + sv[i].Danh)/3);
    }
}
void ThemSV(SinhVien sv[], int n)// ham them Sinh vien
{
    n++;
    printf("\nNhap thong tin sinh vien muon them:\n");
   	int f;
    for(i = f - 1 ; i > 0 ; i--)
    {
        printf("\nNhap ma sinh vien:");
        scanf("%d", &sv[i].MaSV);
        printf("\nNhap ten sinh vien:");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("\nNhap lop:");
        gets(sv[i].Lop);
        fflush(stdin);
        printf("\nNhap diem toan:");
        scanf("%f", &sv[i].Dtoan);
        printf("\nNhap diem van:");
        scanf("%f", &sv[i].Dvan);
        printf("\nNhap diem tieng anh:");
        scanf("%f", &sv[i].Danh);
    }
    printf("\nDanh sach sinh vien sau khi them la:\n");
    Xuat(sv,n);
}
int main()
{
    SinhVien sv[100];// khai bao mang sinh vien co 100 o nho
    int n;//khai bao so nguyen n la sinh vien
    //Nhap du lieu cua n
    do{
        printf("Nhap so sinh vien:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);//dieu kien neu n<1 hoac n>100 yeu cau nhap lai
    
    Nhap(sv, n);//goi ham nhap mang
    printf("\nDanh sach cac sinh vien la:\n");
    Xuat(sv,n);// goi ham xuat mang
    ThemSV(sv,n);
}
