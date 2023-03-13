#include<stdio.h>
#include<stdlib.h>

#define Max 50
int i, j;
void Nhap(float **arr, float n){
  for ( i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("arr[%d][%d]=", i, j);
      scanf("%f", &arr[i][j]);
    }
  }
}
void In(float **arr, float n){
  for ( i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("arr[%d][%d]=%.2f\n", i, j, arr[i][j]);
    }
  }
}

int main(){
  float n, **arr;
  printf("Nhap n: ");
  scanf("%f", &n);
  arr=malloc(sizeof(float *) *n);
  for (i = 0; i < n; i++)
  {
    arr[i]=malloc(sizeof(float *) *n);
  }
  Nhap(arr, n);
  In(arr, n);
  free(arr);
  for (i = 0; i < n; i++)
  {
    free(arr[i]);
  }
  return 0;
}
