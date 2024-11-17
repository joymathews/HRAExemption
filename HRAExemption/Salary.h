#pragma once
namespace HRAExemption
{
	class Salary
	{
	private:
		double yearlyBasicSalary;
		double yearlyHra;
		const int monthsInYear = 12;
		const double factorForPercentage = 0.4;
		const double factorForFiftyPercentage = 0.5;
		const double factorForTenPercentage = 0.1;
	public:
		Salary(double monthlyBasicSalary, double monthlyHra);
		double getFortyPercentOfBasicSalary();
		double getFiftyPercentOfBasicSalary();
		double getTenPercentOfBasicSalary();
		double getHRA();
	};
}

