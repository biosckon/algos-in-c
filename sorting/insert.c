#include<stdio.h>

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

int * insertSort(int a[], int s) {
  int key, i;
	for (int j = 1; j < s; j++) {
		key = a[j];
    i = j - 1;
		while ((i >= 0) && (a[i] > key)) {
			a[i+1] = a[i];
			i -= 1;
		}
		a[i+1] = key;
	}
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
	pa(insertSort(a, s), s);
}

