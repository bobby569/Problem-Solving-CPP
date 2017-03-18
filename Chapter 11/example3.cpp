//Overload << and >>
#include <iostream>
#include <fstream>
#include <cstdlib>

class Class_name{
public:
	friend istream& operator >>(istream& para1, Class_name& para2);
	friend ostream& operator <<(ostream& para3, const Class_name& para4);
}

istream& operator >>(istream& para1, Class_name& para2){

}

ostream& operator <<(ostream& para3, const Class_name& para4){
	
}