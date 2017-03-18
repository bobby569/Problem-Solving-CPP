#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int i;
	for (i = 0; i < 10; i++) {
		int num = rand() % 10;
		cout << num << " ";
	}
	cout << endl;

	double result = static_cast<double>(9) / 2;
	cout << result << endl;
	
	return 0;
}
