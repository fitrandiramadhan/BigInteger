//file		:	BigInteger.hpp
//author	:	steaKK

#ifndef BigInteger_HPP
#define BigInteger_HPP

#include <iostream>
#include <vector>

using namespace std;

class BigInteger {
public:
	BigInteger();
	BigInteger(string);
	BigInteger(vector<int>);
	BigInteger(const BigInteger&);
	BigInteger& operator=(const BigInteger&);
	~BigInteger();

	vector<int> get_data();
	void set_data(string _data);

	string biginteger_to_string();
	void print();

	BigInteger operator+(const BigInteger&);
	BigInteger operator-(const BigInteger&);
	BigInteger& operator*(const BigInteger&);


	//so many choices


private:
	vector<int> data;
};

#endif
