#include "taxClient.h"
#include <iostream>
using namespace std;

TaxClient::TaxClient(string lastName, double income)
{
  setLastName(lastName);
  setIncome(income);
  calculateTaxOwed();
}

void TaxClient::calculateTaxOwed()
{
  double taxOwed = 0;
  double tempOwed = income;
  if (income > 0 && income <= 15100)
  {
    setBracketNum(1);
    taxOwed = income * 0.10;
    setTaxesOwed(taxOwed);
  }
  else if (income > 15100 && income <= 61300)
  {
    setBracketNum(2);
    taxOwed = 1510;
    tempOwed = tempOwed - 15100;
    taxOwed+= (tempOwed * 0.15);
    setTaxesOwed(taxOwed);
  }
  else if (income > 61300 && income <= 123700)
  {
    setBracketNum(3);
    taxOwed = 8440;
    tempOwed = tempOwed - 61300;
    taxOwed+= (tempOwed * 0.25);
    setTaxesOwed(taxOwed);
  }
  else if (income > 123700 && income <= 188450)
  {
    setBracketNum(4);
    taxOwed = 24040;
    tempOwed = tempOwed - 123700;
    taxOwed += (tempOwed * 0.28);
    setTaxesOwed(taxOwed);
  }

  else if (income > 188450 && income <= 336550)
  {
    setBracketNum(5);
    taxOwed = 42170;
    tempOwed = tempOwed - 188450;
    taxOwed += (tempOwed * 0.33);
    setTaxesOwed(taxOwed);
  }

  else
  {
    setBracketNum(6);
    taxOwed = 91043;
    tempOwed = tempOwed - 336550;
    taxOwed += (tempOwed * 0.35);
    setTaxesOwed(taxOwed);
  }

}
