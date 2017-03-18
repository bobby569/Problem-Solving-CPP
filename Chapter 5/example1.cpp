#include <iostream>
//#define NDEBUG	//Used to deactivate cassert
#include <cassert>
using namespace std;

int main(){
	int input;
	cout << "Enter a positive number. You only have one chance: ";
	cin >> input;
	assert(input > 0);

	cout << "You are a good kid :)\n";

	return 0;
}

