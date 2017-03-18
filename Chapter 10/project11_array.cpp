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
	int numScore[5];
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
	for (int i = 0; i < 5; i++) {
		numScore[i] = 0;
	}
}

string Movie::get_movie_name(){
	return movie;
}

string Movie::get_MPAA(){
	return MPAA;
}

void Movie::addRating(int grade){
	if (grade >= 1 && grade <= 5) {
		numScore[grade-1]++;
	} else {
		cout << "Invalid rating or less than 5.\n";
		exit(1);
	}
}

double Movie::getAverage(){
	double score_total = 0.0;
	int num_total = 0;
	for (int i = 0; i < 5; i++) {
		score_total += static_cast<double>(i+1) * numScore[i];
		num_total += numScore[i];
	}
	average = score_total / num_total;

	return average;
}
