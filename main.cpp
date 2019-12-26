#include <iostream>
#include "taxClient.h"
#include <vector>
//#include <iomanip>

using namespace std;

void displayClientData(int clientNum, const vector<TaxClient> &clientVector)
{
  for (int i = 0; i < clientNum; i++)
  {
    cout << "\n\n";
    cout << "Client Last Name: ";
    cout << clientVector[i].getLastName() << endl;
    cout << "Client's Taxable Income: ";
    cout << "$" << clientVector[i].getIncome() << endl;
    cout << "Client's Tax Bracket Number: ";
    cout << clientVector[i].getBracketNum() << endl;
    cout << "Client's Tax Owed: ";
    cout << "$" << clientVector[i].getTaxesOwed() << endl;
  }
}

int main() {

  //newClient Vector 
vector<TaxClient> clientVector;
//Standard procedure for moneys
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);
//close procedure
string lastName;
float income;
int clientNum;

cout << "Please enter number of clients to check: ";
cin >> clientNum;

for (int i = 0; i < clientNum; i++)
{
  cout << "Please enter last name of client " << i + 1 << ": ";
  cin >> lastName;
  
  cout << "Please enter clients taxable income: ";
  cin >> income;
  cout << endl;

  TaxClient taxClient(lastName, income);
  clientVector.push_back(taxClient);
}

displayClientData(clientNum, clientVector);
return 0;
}
