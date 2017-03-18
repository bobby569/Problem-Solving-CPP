#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void add_plus_plus(ifstream& in_stream, ofstream& out_stream){
	char next;

	in_stream.get(next);
	while (!in_stream.eof()) {
		if (next == 'C')
			out_stream << "C++";
		else
			out_stream << next;
	}
}

int main(){
	ifstream fin;
	ofstream fout;

	fin.open("infile");
	if (fin.fail()) {
		cout << "open failure.\n";
		exit(1);
	}
	fout.open("outfile");
	if (fout.fail()) {
		cout << "open failure.\n";
		fin.close();
		exit(1);
	}

	add_plus_plus(fin, fout);
	fin.close();
	fout.close();

	return 0;
}
