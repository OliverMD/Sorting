#include <stdio.h>

void sort(int list[], int size);
void swap(int *left, int *right);
void printArray(int list[], int size);

int main(){
  int test[] = {4,3,2,1};
  printArray(test, 4);
  sort(test, 4);
  printArray(test, 4);
  return 0;
}

void  sort(int list[], int size){
  int i;
  for(i = 0; i < size; i++){
    int j;
    int *min = &(list[i]);
    for(j = i; j < size; j++){
      if(*min > list[j]){
	min = &(list[j]);
      }
      swap(&(list[i]), min);
    }
  }
}
void swap(int *left, int *right){
  int temp = *left;
  *left = *right;
  *right = temp;
}
void printArray(int list[], int size){
  int i;
  for(i = 0; i < size - 1; i++){
    printf("%d, ", list[i]);
  }
  printf("%d;\n", list[size-1]);
}
