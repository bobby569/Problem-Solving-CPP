#include <iostream>

void swap(int& v1, int& v2){
	int temp = v1;
	v1 = v2;
	v2 = temp;
}

void SelectionSort(int arr[], int length){
	int index_smallest, min;
	int i, j;
	for (i = 0; i < length; i++) {
		index_smallest = 0;
		min = arr[i];
		for (j = i+1; j < length; j++) {
			if (arr[j] < min) {
				index_smallest = j;
			}
		}
		swap(arr[i], arr[index_smallest]);
	}
}
