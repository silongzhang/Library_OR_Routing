#include"define.h"

clock_t start;


void printErrorAndExit(const string &str)
{
	cout << "There is an error in " + str + " ! " << endl;
	system("pause");
	exit(1);
}


//����������ʱ��
double runTime(const clock_t &start)
{
	clock_t finish = clock();
	return (double)(finish - start) / CLOCKS_PER_SEC;
}


string getNowTime()
{
	ostringstream oss;
	oss << time(0);
	return oss.str();
}


void printSeparator(const int &numOfEnter, const int &vertical, const int &horizontal, 
	const char &character) {
	for (int i = 0; i < numOfEnter; ++i) { cout << endl; }
	for (int i = 0; i < vertical; ++i) {
		for (int j = 0; j < horizontal; ++j) {
			cout << character;
		}
		cout << endl;
	}
}


void printSeparator(const int &numOfEnter, const int &vertical, const int &horizontal,
	const char &character, ofstream &os) {
	for (int i = 0; i < numOfEnter; ++i) { os << endl; }
	for (int i = 0; i < vertical; ++i) {
		for (int j = 0; j < horizontal; ++j) {
			os << character;
		}
		os << endl;
	}
}


bool lessThanReal(const double &lhs, const double &rhs, const double &threshold) {
	return lhs < rhs - threshold;
}


bool greaterThanReal(const double &lhs, const double &rhs, const double &threshold) {
	return lhs > rhs + threshold;
}


bool equalToReal(const double &lhs, const double &rhs, const double &threshold) {
	return !(lessThanReal(lhs, rhs, threshold) || greaterThanReal(lhs, rhs, threshold));
}
