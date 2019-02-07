//file		:	BigInteger.cpp
//author	:	steaKK

#include "BigInteger.hpp"

BigInteger::BigInteger() {
	data.push_back(0);
}

BigInteger::BigInteger(string _data) {
	for(int i=_data.size()-1;i>=0;i--) data.push_back(_data.at(i)-48);
}

BigInteger::BigInteger(vector<int> _data) {
	data = _data;
}

BigInteger::BigInteger(const BigInteger& _BigInteger) {
	data = _BigInteger.data;
}

BigInteger& BigInteger::operator=(const BigInteger& _BigInteger) {
	data = _BigInteger.data;
	return *this;
}

BigInteger::~BigInteger() {

}

vector<int> BigInteger::get_data() {
	return data;
}

void BigInteger::set_data(string _data) {
	data.clear();
	for(int i=_data.size()-1;i>=0;i--) data.push_back(_data.at(i));
}

void BigInteger::print() {
	for(int i=data.size()-1;i>=0;i--) cout << data[i];
	cout << endl;
}

BigInteger BigInteger::operator+(const BigInteger& _BigInteger) {
	BigInteger result(_BigInteger);
	if(result.data.size()<data.size()) {
		for(int i=result.data.size();i<data.size();i++) result.data.push_back(0);
	}
	result.data.push_back(0);
	for(int i=0;i<result.data.size()-1;i++) {
		if(i<data.size()) result.data[i] += data[i];
		if(result.data[i]>9) {
			result.data[i] -= 10;
			result.data[i+1]++;
		}
	}
	if(result.data.back()==0) result.data.pop_back();
	return result;
}
