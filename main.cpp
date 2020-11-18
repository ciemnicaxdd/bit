#include <iostream>
#include <bitset>


using namespace std;



string zero(int x, int y){


	string number=bitset<8>(x & y).to_string();

	return number;
}

int main(int argc, char** argv) {




	cout<<zero(0b0000001,0);

	return 0;
}
