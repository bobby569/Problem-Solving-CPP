#include <stdio.h>
#include <stdlib.h> 

void swap(int *x,int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
}

void quicksort(int list[],int m,int n){
   int key, i, j, k;
   if (m < n) {
      k = (m+n)/2;
      swap(&list[m],&list[k]);
      key = list[m];
      i = m + 1;
      j = n;
      while (i <= j) {
         while((i <= n) && (list[i] <= key))
            i++;
         while((j >= m) && (list[j] > key))
            j--;
         if (i < j)
            swap(&list[i], &list[j]);
      }
      //swap two elements
      swap(&list[m], &list[j]);
      //sort smaller size of data recursively
      quicksort(list, m, j - 1);
      quicksort(list, j + 1, n);
   }
}

void printlist(int list[], int n){
   int i;
   for (i = 0; i < n; i++) {
      printf("%d\t",list[i]);
   }
}

int main() {
   const int MAX_ELEMENTS = 10;
   int list[MAX_ELEMENTS];

   int i = 0;
   
   //generate random numbers for the array
   for(i = 0; i < MAX_ELEMENTS; i++ ){
     list[i] = rand();
   }
   printf("Before sorting:\n");
   printlist(list,MAX_ELEMENTS);
   
   // sort the list using quicksort
   quicksort(list,0,MAX_ELEMENTS-1);

   // print the result
   printf("After sorting:\n");
   printlist(list,MAX_ELEMENTS);

   return 0;
}