//Create namespace
#include <iostream>
using namespace std;

namespace savitch1{
	void greeting(){
		cout << "Hello from namespace savitch1";
	}
}

namespace savitch2{
	void greeting(){
		cout << "Hello from namespace savitch2";
	}
}

void big_greeting(){
	 cout << "A Big Global Hello!\n";
}

int main(){
	{
		using namespace savitch1;
		greeting();
	}

	{
		using namespace savitch2;
		greeting();
	}

	big_greeting();

	return 0;
}
