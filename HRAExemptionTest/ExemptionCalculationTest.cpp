#include "pch.h"
#include "Salary.h"
#include "Rent.h"
#include "ExemptionCalculator.h"
using namespace HRAExemption;

namespace HRAExemptionTests {
	//Feature: Exemption Calculation

	// Scenario: Actual HRA received per year is the least amount
	//
	// Given basic salary is One lakh per month, HRA is Ten Thousand per month
	// When rent paid monthly is Twenty Five Thousand and not living in metro city
	// Then the HRA tax exemption per year would be One lakh twenty thousand, since HRA received yearly is the least amount.
	TEST(ExemptionCalculation, ActualHRAReceivedIsLeast) {
		Salary salary(100000, 10000);
		Rent rent(25000);
		ExemptionCalculator calculator(salary, rent, false);
		EXPECT_EQ(calculator.calculateExemption(),120000 );
	}

	// Scenario: Actual rent paid minus ten percent of basic salary is the least amount
	//
	// Given basic salary is One lakh per month, HRA is Ten Thousand per month
	// When rent paid monthly is Eighteen Thousand and not living in metro city
	// Then the HRA tax exemption per year would be ninety-six thousand, since rent paid minus ten percent of basic salary is the least amount.
	TEST(ExemptionCalculation, ActualRentMinusTenPercentageBasicSalaryIsLeast) {
		Salary salary(100000, 10000);
		Rent rent(18000);
		ExemptionCalculator calculator(salary, rent, false);
		EXPECT_EQ(calculator.calculateExemption(), 96000);
	}

	// Scenario: Forty percent of basic salary is the least amount
	//
	// Given basic salary is One lakh per month, HRA is Fifty Thousand per month
	// When rent paid monthly is Fifty One Thousand and not living in metro city
	// Then the HRA tax exemption per year would be Four lakh Eighty Thousand, since forty percent of basic salary is the least amount.
	TEST(ExemptionCalculation, FourtyPercentOfBasicSalaryIsLeast) {
		Salary salary(100000, 50000);
		Rent rent(51000);
		ExemptionCalculator calculator(salary, rent, false);
		EXPECT_EQ(calculator.calculateExemption(), 480000);
	}

	//Scenario: Fifty percent of basic salary is the least amount
	//
	// Given basic salary is One lakh per month, HRA is Fifty Two Thousand per month
	// When rent paid monthly is Sixty Five Thousand and living in metro city
	// Then the HRA tax exemption per year would be Six lakh, since fifty percent of basic salary is the least amount.
	TEST(ExemptionCalculation, FiftyPercentOfBasicSalaryIsLeast) {
		Salary salary(100000, 52000);
		Rent rent(65000);
		ExemptionCalculator calculator(salary, rent, true);
		EXPECT_EQ(calculator.calculateExemption(), 600000);
	}
}