#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#define SIMULATION 10000
using namespace std;

void shoot(bool& targetAlive, double accuracy){
	int media = static_cast<int>(1 / accuracy);
	if (!(rand() % media)) {
		targetAlive = false;
	}
}

void startDuel(bool aAlive, bool bAlive, bool cAlive, int& aWin, int& bWin, int& cWin){
	while (true) {
		if (aAlive) {
			shoot(aAlive, 0.3);
		} else if (bAlive) {
			shoot(bAlive, 0.3);
		} else {
			cWin++;
			return;
		}

		if (aAlive) {
			shoot(aAlive, 0.5);
		} else if (cAlive) {
			shoot(cAlive, 0.5);
		} else {
			bWin++;
			return;
		}

		if (bAlive) {
			shoot(bAlive, 1);
		} else if (cAlive) {
			shoot(cAlive, 1);
		} else {
			aWin++;
			return;
		}
	}
}

int main(void){
	srand(time(0));
	bool aAlive = true, bAlive = true, cAlive = true;
	int aWin = 0, bWin = 0, cWin = 0;
	double ap, bp, cp;
	int i;
	for (i = 0; i < SIMULATION; i++) {
		startDuel(aAlive, bAlive, cAlive, aWin, bWin, cWin);
	}

	ap = static_cast<double>(aWin) / SIMULATION * 100;
	bp = static_cast<double>(bWin) / SIMULATION * 100;
	cp = static_cast<double>(cWin) / SIMULATION * 100;

	cout << "The probability for Aaron to win is: " << ap << "%\n";
	cout << "The probability for Bob to win is: " << bp << "%\n";
	cout << "The probability for Charlie to win is: " << cp << "%\n";

	return 0;
}
