#include<stdio.h>

#define Max 50
int i,j;
void Nhap(int* arr, int n){
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void In(int arr[Max], int n){
  for (i = 0; i < n; i++)
  {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
}
void MaxMin(int arr[Max], int n){
  int MAX=arr[0];
  int MIN=arr[0];
  for (i = 0; i < n; i++)
  {
    if(MAX<arr[i]) MAX=arr[i];
    if(MIN>arr[i]) MIN=arr[i];
  }
  printf("MAX=: %d\n", MAX);
  printf("MIN=: %d\n", MIN);
}
int main(){
  int n, arr[Max];
  printf("Nhap n: ");
  scanf("%d", &n);
  Nhap(arr, n);
  In(arr, n);
  MaxMin(arr, n);
  return 0;
}
