#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define Max 50
int i, j;
bool ngto(int x){
  if(x<2) return false; 
  for (i = 2; i < x; i++)
  {
    if(x%i==0) return false;
  }
  return true;
}
void Nhap1chieu(int *arr, int n){
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void In1chieu(int arr[], int n){
  for (i = 0; i < n; i++)
  {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
  printf("Cac so ngto cua mang 1 chieu la: \n");
  for (i = 0; i < n; i++)
  {
    if(ngto(arr[i])) printf("arr[%d]=%d ", i, arr[i]);
  }
}
void Nhap2chieu(int **Arr, int m){
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &Arr[i][j]);
    }
  }
}
void In2chieu(int **Arr, int m){
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("Arr[%d][%d]=%d\n", i, j, Arr[i][j]);
    }
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < m; j++)
    {
      if(ngto(Arr[i][j])) printf("Arr[%d][%d]=%d ", i, j, Arr[i][j]);
    }
  }
}
int main(){
  int n, m, arr[Max], **Arr;
  printf("Nhap so phan tu mang 1 chieu: ");
  scanf("%d", &n);
  Nhap1chieu(arr, n);
  In1chieu(arr, n);
  printf("\nNhap m (m*m phan tu mang 2 chieu): ");
  scanf("%d", &m);
  Arr=malloc(sizeof(int *) *m);
  for (i = 0; i < m; i++)
  {
    Arr[i]=malloc(sizeof(int *) *m);
  }
  Nhap2chieu(Arr, m);
  In2chieu(Arr, m);
  free(Arr);
  for (i = 0; i < m; i++)
  {
    free(Arr[i]);
  }
  return 0;
}
