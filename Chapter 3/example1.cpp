#include <iostream>
using namespace std;

int main(){
	enum MonthLength {JAN = 31, FEB = 28, MAR = 31, APR = 30, 
											MAY = 31, JUN = 30, JUL = 31, AUG = 31, 
											SEP = 30, OCT = 31, NOV = 30, DEC = 31};	
	
	enum class Days {Sun, Mon, Tue, Wed};
	enum class Weather {Rain, Sun};
	Days d = Days::Tue;
	Weather w = Weather::Sun;
	
	return 0;
}
