#pragma once
namespace HRAExemption
{
	class Rent
	{
	private:
		double rent;
		const int monthsInYear = 12;
	public:
		Rent(double monthlyRent);
		double getRent();
	};
}

