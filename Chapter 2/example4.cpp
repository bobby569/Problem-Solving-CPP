#include <iostream>
#include <cstdint>
using namespace std;

int main(){
	int8_t a8;
	uint8_t b8;
	int16_t a16;
	uint16_t b16;
	int32_t a32;
	uint32_t b32;
	int64_t a64;
	uint64_t b64;
	
	auto x = (expression);	//The type of x will be determined by the rvalue
	
	int m = 10;
	decltype (m * 3.5) y;	//y will be double cuz m * 3.5 is double

	return 0;
}
