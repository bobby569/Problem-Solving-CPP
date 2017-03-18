//dynamic array
#include <iostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

typedef int* IntArrayPtr;	//Define the type of pointer

void sort(int a[], int size){
	//
}

void fill_array(int a[], int size){
	cout << "Enter " << size << " integers.\n";
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
}

int main(){
	int array_size;
	cout << "Enter size: ";
	cin >> array_size;

	IntArrayPtr a;	//Declare pointer variable
	a = new int[array_size];	//Invoke new

	fill_array(a, array_size);
	sort(a, array_size);

	cout << "After sorting: \n";
	for (int i = 0; i < array_size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	delete [] a;	//Invoke delete

	return 0;
}