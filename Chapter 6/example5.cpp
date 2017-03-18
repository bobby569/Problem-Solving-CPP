#include <iostream>
#include <iomanip>
using namespace std;

void default_args(int arg1, int arg2, int arg3 = -3, int arg4 = -4){
	cout << setw(3) << arg1 << setw(3) << arg2 << setw(3) << arg3 << setw(3) << arg4 << endl;
}

int main(){
	default_args(5, 6);
	default_args(5, 6, 7);
	default_args(5, 6, 7, 8);

	return 0;
}
