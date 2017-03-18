#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	ifstream in_stream;
	in_stream.open("infile");
	if (in_stream.fail()){
		cout << "open failure\n";
		exit(1);
	}

	double next, sum = 0;
	int count = 0;
	while (in_stream >> next) {
		sum += next; 
		count++;
	}

	cout << "The average is " << sum / count << endl;

	return 0;
}