#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(void){
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("infile");
	if (in_stream.fail()) {
		cout << "Input file opening failed.\n";
		exit(1);
	}
	out_stream.open("outfile");	//similar to fopen(filename, "w")
	//out_stream.open("outfile", ios::app);	//similar to fopen(filename, "a")
											//"app" stands for "append"
	if (out_stream.fail()) {
		cout << "Output file opening failed.\n";
		in_stream.close();
		exit(1);
	}

	int first, second, third;
	in_stream >> first >> second;
	out_stream << "The average is " << (first + second ) / 2 << endl;

	in_stream.close();
	out_stream.close();

	return 0;
}