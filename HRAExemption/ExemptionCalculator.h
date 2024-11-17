#pragma once
#include"Salary.h"
#include "Rent.h"
namespace HRAExemption
{
	class ExemptionCalculator
	{
	private:
		Salary salaryDetails;
		Rent rentDetails;
		bool metroCity;
		double calculateActualRentMinusTenPercentageBasicSalary();
		double calculateBasicSalaryExemption();
	public:
		ExemptionCalculator(Salary salary, Rent rent, bool livingInMetroCity);
		double calculateExemption();
	};
}

