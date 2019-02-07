//file		:	main.cpp
//author	:	steaKK

#include "BigInteger.hpp"

int main() {
	string s1 = "7423874";
	string s2 = "4238";

	BigInteger b1(s1);
	BigInteger b2(s2);

	BigInteger b3 = b1 + b2;

	// cout << b3.get_data().size() << endl;

	b3.print();

	return 0;
}
