#include "ExemptionCalculator.h"
#include <algorithm>
using namespace HRAExemption;

double ExemptionCalculator::calculateActualRentMinusTenPercentageBasicSalary()
{
	auto actual_rent_paid = rentDetails.getRent();
	auto ten_percent_of_basic_salary = salaryDetails.getTenPercentOfBasicSalary();
	return actual_rent_paid - ten_percent_of_basic_salary;
}

double ExemptionCalculator::calculateBasicSalaryExemption()
{
	return (metroCity)? salaryDetails.getFiftyPercentOfBasicSalary() : salaryDetails.getFortyPercentOfBasicSalary();
}

ExemptionCalculator::ExemptionCalculator(Salary salary, Rent rent, bool livingInMetroCity) 
	:salaryDetails(salary), rentDetails(rent), metroCity(livingInMetroCity)
{
}

double ExemptionCalculator::calculateExemption()
{
	return std::min(
		{
		salaryDetails.getHRA(),
		calculateBasicSalaryExemption(),
		calculateActualRentMinusTenPercentageBasicSalary()
		}
		);
}

