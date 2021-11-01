#include "CombinedGpa.h"
#include <iostream>
using namespace std;

CombinedGpa::CombinedGpa(int size) {
	units = new double[size];
	gpa = new double[size];
	listSize = size;

	for (int i = 0; i < size; i++) {
		units[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		gpa[i] = 0;
	}
}

CombinedGpa::~CombinedGpa() {
	delete[] units;
	units = nullptr;

	delete[] gpa;
	gpa = nullptr;
}

void CombinedGpa::setUnits(int size, double numUnits, int i) {
		units[i] = numUnits;
}

void CombinedGpa::setGpa(int size, double userGpa, int i) {
	gpa[i] = userGpa;

}

double CombinedGpa::getUnits(int i) {
	return units[i];
}

double CombinedGpa::getGpa(int i) {
	return gpa[i];
}

double CombinedGpa::calcCombinedGpa() {
	double totalNumerator = 0;
	double totalDenomenator = 0;

	for (int i = 0; i < listSize; i++) {
		totalNumerator += getUnits(i) * getGpa(i);
	}

	for (int i = 0; i < listSize; i++) {
		totalDenomenator += getUnits(i);
	}

	return (totalNumerator / totalDenomenator);
}