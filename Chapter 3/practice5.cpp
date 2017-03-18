#include <iostream>
#include <math.h>
using namespace std;
#define UPPER 100

int main(){
	int n, i;
	for (n = 2; n < UPPER; n++) {
		for (i = 2; i < sqrt(n); i++) {
			if (n % i == 0) {
				break;
			}
		}
		if (i > sqrt(n)) {
			cout << n << " ";	
		}
	}
	cout << endl;

	return 0;
}