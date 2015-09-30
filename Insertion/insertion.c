#include <stdio.h>

void sort(int *arrayPtr, int len);
void swap(int *a, int *b);
void printArray(int *arrayPtr, int len);

int main() {
  int array[5] = {5,4,3,2,1};
  printArray(array, 5);
  sort(array, 5);
  printArray(array, 5);
}

void sort(int *arrayPtr, int len){
  int i;
  for(i = 0; i < len; i++){
    int j;
    int loc = i;
    for(j = i -1; j >= 0; j--){
      if (*(arrayPtr + j) > *(arrayPtr + loc)){
	swap(arrayPtr + j, arrayPtr + loc);
	loc = j;
      }
    }
  }
}

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int *arrayPtr, int len){
  int i;
  for(i = 0; i < len - 1; i++){
    printf("%d,", *(arrayPtr+i));
  }
  printf("%d\n", *(arrayPtr+len-1));
}
