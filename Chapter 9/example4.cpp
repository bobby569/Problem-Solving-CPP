//dynamic multi-dimensional array
#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

int main(){
	int d1, d2;
	cout << "Enter the row and the column dimensions: \n";
	cin >> d1 >> d2;

	//Alloc memory
	IntArrayPtr *m = new IntArrayPtr[d1];
	int i, j;
	for (i = 0; i < d1; i++) {
		m[i] = new int[d2];
	}

	//Free memory
	for (i = 0; i < d1; i++) {
		delete [] m[i];
	}
	delete [] m;

	return 0;
}