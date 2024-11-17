#include "pch.h"
#include "Rent.h"
using namespace HRAExemption;

namespace HRAExemptionTests {
	// Feature: Rent

	// Scenario: Retrieve Rent
	//
	// Given rent paid monthly
	// When a Rent class object is created with this information
	// Then rent paid yearly must be returned
	TEST(Rent, RetrieveRent) {
		Rent rent(1000);
		EXPECT_EQ(rent.getRent(), 1000 * 12);
	}
}