#include "Salary.h"
using namespace HRAExemption;
Salary::Salary(double monthlyBasicSalary, double monthlyHra) : yearlyBasicSalary(monthlyBasicSalary), yearlyHra(monthlyHra)
{
	yearlyBasicSalary = yearlyBasicSalary * monthsInYear;
	yearlyHra = yearlyHra * monthsInYear;
}
double Salary::getFortyPercentOfBasicSalary()
{
	return yearlyBasicSalary * factorForPercentage;
}

double Salary::getFiftyPercentOfBasicSalary()
{
	return yearlyBasicSalary * factorForFiftyPercentage;
}

double Salary::getTenPercentOfBasicSalary()
{
	return yearlyBasicSalary * factorForTenPercentage;
}

double Salary::getHRA()
{
	return yearlyHra;
}


