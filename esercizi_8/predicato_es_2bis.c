#include <stdio.h>

int verifica(int a[], int n){
  for(int j = 0; j < n; j++){
    int verifica = 1;
    for(int i = 0; i <= j; i++)
      if(a[i] > j)
        verifica = 0;
    for(int i = j + 1; i < n; i++)
      if(a[i] <= j)
        verifica = 0;
    if(verifica == 1)
      return 1;
  }
  return 0;
}

void main(){
  int a[] = {5,-8,10,12,3};
  int n = 5;
  if(verifica(a,n) == 1)
    printf("L'array soddisfa il predicato :)\n");
  else
    printf("L'array non soddisfa il predicato :(\n");
}