#include<stdio.h>

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

int * mergeSort(int a[], int s) {
  
  return a;
}

void pa(int a[], int s) {
  for(int i = 0; i < s; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}


int main(void) {
  int a[] = {10, 3, 240, 34, 100, 2};
  int s = NELEMS(a);
  pa(a, s);
	pa(mergeSort(a, s), s);
}

