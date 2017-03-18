#include <iostream>
#include <cstdlib>
using namespace std;

class Movie{
public:
	Movie(string movie_name, string MPAA_rate);
	string get_movie_name();
	string get_MPAA();
	void addRating(int grade);
	double getAverage();
	void output();
private:
	string movie;
	string MPAA;
	int numScore1;
	int numScore2;
	int numScore3;
	int numScore4;
	int numScore5;
	double average;
};

int main(){
	Movie movie1("Fifty Shades of Grey", "R");
	int rate, count = 0;
	cout << "Please rate " << movie1.get_movie_name() << " (end with -1): ";
	cin >> rate;
	while (count < 5 || rate != -1) {
		count++;
		movie1.addRating(rate);
		cin >> rate;
	}
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	
	cout << "Movie Name: " << movie1.get_movie_name() << endl 
			<< "MPAA: " << movie1.get_MPAA() << endl
			<< "Average score: " << movie1.getAverage() << endl;

	return 0;
}

Movie::Movie(string movie_name, string MPAA_rate){
	movie = movie_name;
	MPAA = MPAA_rate;
	numScore1 = 0;
	numScore2 = 0;
	numScore3 = 0;
	numScore4 = 0;
	numScore5 = 0;
}

string Movie::get_movie_name(){
	return movie;
}

string Movie::get_MPAA(){
	return MPAA;
}

void Movie::addRating(int grade){
	switch(grade) {
		case 1: numScore1++;
			break;
		case 2: numScore2++;
			break;
		case 3: numScore3++;
			break;
		case 4: numScore4++;
			break;
		case 5: numScore5++;
			break;
		default: 
			cout << "Invalid rating or less than 5.\n";
			exit(1);
	}
}

double Movie::getAverage(){
	average = (1.0*numScore1 + 2.0*numScore2 + 3.0*numScore3 + 4.0*numScore4 + 5.0*numScore5) / 
				(numScore5 + numScore4 + numScore3 + numScore2 + numScore1);
	return average;
}
