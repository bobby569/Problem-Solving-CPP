#include <iostream>
#include <cstdlib>
#include <ctime>
#define PIN 56453
using namespace std;

void print_info(int rannum[], int length){
	int i;
	cout << "PIN: ";
	for (i = 0; i < length; i++) {
		cout << i << " ";
	}
	cout << endl;
	cout << "NUM: ";
	for (i = 0; i < length; i++) {
		cout << rannum[i] << " ";
	}
	cout << endl;
}

int main(){
	srand(time(0));
	int pin[5], rannum[10];
	int i;
	for (i = 0; i < 10; i++) {
		rannum[i] = rand() % 5 + 1;
	}
	print_info(rannum, 10);
	pin[0] = rannum[PIN / 10000];
	pin[1] = rannum[PIN / 1000 % 10];
	pin[2] = rannum[PIN / 100 % 10];
	pin[3] = rannum[PIN / 10 % 10];
	pin[4] = rannum[PIN % 10];
	int right_pin = 10000*pin[0] + 1000*pin[1] + 100*pin[2] + 10*pin[3] + pin[4];
	int input_pin;
	cout << "Enter your pin number: ";
	cin >> input_pin;
	if (input_pin == right_pin) {
		cout << "Correct!\n";
	} else {
		cout << "Wrong!\n";
	}

	return 0;
}
