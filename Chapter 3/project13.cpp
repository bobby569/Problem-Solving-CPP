#include <iostream>
using namespace std;

int main(){
	int i;
	int thou, hun, ten, unit;
	for (i = 1000; i <= 9999; i++) {
		thou = i / 1000;
		hun = i / 100 % 10;
		ten = i / 10 % 10;
		unit = i % 10;
		if (thou != hun && thou != ten && thou != unit && hun != ten && hun != unit && ten != unit) {
			if (thou == 3 * ten) {
				if (i % 2 == 1) {
					if (thou + hun + ten + unit == 27) {
						cout << i << endl;
					}
				}
			}
		}
	}

	return 0;
}