#ifndef CALC_H
#define CALC_H

#include <string>

class Calc {
public:
	Calc(int val);
	Calc(const Calc& rhs);
	~Calc();

	const Calc& operator=(const Calc& rhs);
	double process(std::string userInput, double prevValue);

	void print();
	std::string* storedExpressions;

	void setStored(rsize_t newStored);
	rsize_t getStored();

private:
	rsize_t stored;
};

#endif