#include<stdio.h>
#include<stdlib.h>
int i, j;
void Nhap(int **arr, int n){
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void In(int **arr, int n){
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
void Incheo_Tong(int **arr, int n){
  int T=0;
  for (i = 0; i < n; i++)
  {
    printf("arr[%d][%d]=%d  ", i, i, arr[i][i]);
    T+=arr[i][i];
  }
  printf("\nTong phan tu duong cheo chinh la: %d\n", T);
}
void Inbien_Tong(int **arr, int n){
  int T=0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if(i==0 || i==n-1){
        printf("%d ", arr[i][j]);
        T+=arr[i][j];
      } else if(j==0 || j==n-1){
        printf("%d ", arr[i][j]);
        T+=arr[i][j];
      } else printf("  ");
    }
    printf("\n");
  }
  printf("Tong phan tu o bien la: %d", T);
}

int main(){
  int **arr, n;
  printf("Nhap n: ");
  scanf("%d", &n);
  arr=malloc(sizeof(int *) *n);
  for (i = 0; i < n; i++)
  {
    arr[i]=malloc(sizeof(int *) *n);
  }
  Nhap(arr, n);
  In(arr, n);
  Incheo_Tong(arr, n);
  Inbien_Tong(arr, n);
  free(arr);
  for (i = 0; i < n; i++)
  {
    free(arr[i]);
  }
  return 0;
}
