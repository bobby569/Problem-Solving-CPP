#include <iostream>

void swap(int& v1, int& v2){
	int temp = v1;
	v1 = v2;
	v2 = temp;
}

void BubbleSort(int arr[], int length){
	int i, j;
	for (i = length - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}


