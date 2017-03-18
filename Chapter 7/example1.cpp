#include <iostream>
using namespace std;

int main(){
	int arr[] = {2, 4, 6, 8};
	for (int x : arr) {
		cout << x;
	}
	cout << endl;

	int arr2[] = {1, 4, 7, 10};
	for (int& x : arr2) {
		x++;
	}
	for (auto x : arr2) {
		cout << x;
	}
	cout << endl;
}