#include "Rent.h"
using namespace HRAExemption;

Rent::Rent(double monthlyRent) : rent(rent)
{
	rent = monthlyRent * monthsInYear;
}

double Rent::getRent()
{
    return this->rent;
}
