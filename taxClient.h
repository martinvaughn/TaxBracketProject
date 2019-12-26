#ifndef TAX_H
#define TAX_H
#include <iostream>
using namespace std;

class TaxClient
{
  private:
  double income;
  string lastName;
  int bracketNum;
  double taxesOwed;

  public:
  //TaxClient Constructor
  TaxClient(string lastName, double income);

  //set and return the clients income.
  void setIncome(const double income){this->income = income;}
  double getIncome() const {return income;}

  //set and return the clients bracket number.
  void setBracketNum(const int bracketNum){this->bracketNum = bracketNum;}
  int getBracketNum()const{return bracketNum;}

  //set and return the clients taxes owed.
  void setTaxesOwed(const double taxesOwed){this->taxesOwed=taxesOwed;}
  double getTaxesOwed() const{return taxesOwed;}

  //set and return the clients last name.
  void setLastName(const string lastName){this->lastName = lastName;}
  string getLastName()const{return lastName;}

  //Calculate the taxes owed.
  void calculateTaxOwed();

};
#endif
