#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define TIMES 30000

int main(){
	cout << "This program will show the Monty Hall Problem.\n"
		<< "It will hold " << TIMES << " times\n\n";
	int target, guess, reveal, new_guess;
	int count_switch = 0, count_n_switch = 0;
	int i;
	srand(time(0));
	for (i = 0; i < TIMES; i++) {
		target = rand() % 3;
		guess = rand() % 3;
		do {
			reveal = rand() % 3;
		} while (reveal == target || reveal == guess);
		if (guess == target) {
			count_switch++;
		}
		do {
			new_guess = rand() % 3;
		} while (new_guess == guess || new_guess == reveal);
		if (new_guess == target) {
			count_n_switch++;
		}
		
	}
	cout << "The times it's guessed right if switch is: " << count_switch << endl;
	cout << "The times it's guessed right if not switch is: " << count_n_switch << endl;

	return 0;
}
