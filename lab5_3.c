#include<stdio.h>
#include<stdlib.h>
int i, j;
void Nhap(int **arr, int n){
  for (i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
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
      printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
    }
  }
}
int Tongle(int **arr, int n){
  int T=0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if(arr[i][j]%2!=0) T+=arr[i][j];
    }
  }
  return T;  
}
int main(){
  int n, **arr;
  printf("Nhap n: ");
  scanf("%d", &n);
  arr=malloc(sizeof(int *) *n);
  for (i = 0; i < n; i++)
  {
    arr[i]=malloc(sizeof(int *) *n);
  }
  Nhap(arr, n);
  In(arr, n);
  printf("Tong cac so le la: %d", Tongle(arr, n));
  free(arr);
  for (
  i = 0; i < n; i++)
  {
    free(arr[i]);
  }
  return 0;
}
