#include <iostream>
#include <bitset>
#include <stdlib.h>
using namespace std;

string zero(int number, int bit)

{
int base = 0b11111111;
int fix = 0b00000001;

if(bit != 0)
{
fix <<=bit;
}
base = base ^ fix;


	string x = bitset<8>(number & base).to_string();
    return x;
}

int main(int argc, char** argv) 
{


	cout<<zero(2,1);
	return 0;
}
