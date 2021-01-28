#include <iostream>
//problem 3 employeepay

using namespace std;

int main (){
  //Variable declaration
  double const PAY_RATE = 16.00;
  double const SS_TAX = .06;
  double const FED_INCOME_TAX = .14;
  double const STATE_INCOME_TAX = .05;
  double const MED_INSURANCE = 10.00;
  double hoursWorked;
  double grossRate;
  double ssTax;
  double fedIncomeTax;
  double stateIncomeTax;
  double netPay;

  //Prompt the user to enter weekly working hours
  cout << "Enter the number of hours worked in a week: ";
  cin >> hoursWorked;

  //Conditional if statement that computes the employees gross pay
  if (hoursWorked > 40){
    grossRate = PAY_RATE * hoursWorked * 1.5;
  }
  else{
    grossRate = hoursWorked * PAY_RATE;
  }

  //Computes withheld amounts
  ssTax = grossRate * SS_TAX;
  fedIncomeTax = grossRate * FED_INCOME_TAX;
  stateIncomeTax = grossRate * STATE_INCOME_TAX;
  netPay = grossRate - ssTax - fedIncomeTax - stateIncomeTax - MED_INSURANCE;

  //Outputs to console the employees weekly amounts 
  cout << "Gross pay for the week: $" << grossRate << endl;
  cout << "Amount withheld for Social Security: $" << ssTax << endl;
  cout << "Amount withheld for federal income tax: $" << fedIncomeTax << endl;
  cout << "Amount withheld for state income tax: $" << stateIncomeTax << endl;
  cout << "Amount withheld for medical insurance: $" << MED_INSURANCE << endl;
  cout << "Net take-home for the week: $" << netPay << endl;

return 0;
}
