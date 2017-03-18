#include <iostream>
#include <cstdlib>
#define NUMOFSTU 5
#define QUIZ 2
#define MIDTERM 1
#define QUIZFULL 10
#define MIDTERMFULL 100
#define FINALFULL 100
using namespace std;

struct record{
	double quiz[2];
	double midterm;
	double final;
	char grade;
};

void get_info(record& student){
	cout << "Enter two quiz, midterm and final score, accordingly:\n";
	cin >> student.quiz[0] >> student.quiz[1] >> student.midterm >> student.final;
	if (student.quiz[0] < 0 || student.quiz[0] > 10 || student.quiz[1] < 0 || student.quiz[1] > 10
		|| student.midterm < 0 || student.midterm > 100 || student.final < 0 || student.final > 100) {
		cout << "Invalid score(s).\n";
		exit(1);
	}
	return;
}

char cal_grade(record student){
	const double total = 0.25*QUIZ*QUIZFULL + 0.25*MIDTERM*MIDTERMFULL + 0.5*FINALFULL;
	double total_get = 0.25 * (student.quiz[0]+student.quiz[1]) + 
					0.25 * student.midterm + 0.5 * student.final;
	total_get = total_get / total * 100;
	if (total_get >= 90) {
		return 'A';
	} else if (total_get >= 80) {
		return 'B';
	} else if (total_get >= 70) {
		return 'C';
	} else if (total_get >= 60) {
		return 'D';
	} else {
		return 'F';
	}
}

int main(){
	record student[NUMOFSTU];
	int i;
	for (i = 0; i < NUMOFSTU; i++) {
		get_info(student[i]);
	}
	for (i = 0; i < NUMOFSTU; i++) {
		student[i].grade = cal_grade(student[i]);
	}
	for (i = 0; i < NUMOFSTU; i++) {
		cout << "Student " << i << ": " << student[i].grade << endl;
	}

	return 0;
}
