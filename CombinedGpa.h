#ifndef COMBINEDGPA_H
#define COMBINEDGPA_H

class CombinedGpa
{
private:
	double* units;
	double* gpa;
	int listSize;

public:
	CombinedGpa(int);
	void setUnits(int, double, int);		//change to bool later
	void setGpa(int, double, int);
	double getUnits(int);
	double getGpa(int);
	double calcCombinedGpa();
	~CombinedGpa();
};

#endif