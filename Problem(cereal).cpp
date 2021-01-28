#include <iostream>
//problem 1 cereal

using namespace std;

int main(){
//Variable declaration
double const M_TON = 35273.92;
double ounces;
double conversion;
double numBox;

//Prompt user for ceral box weight in ounces
cout << "Enter the cereal box wieght in ounces: ";
cin >> ounces;

//Compute cereal box weight to metric tons and output to console
conversion = ounces/M_TON;
cout << "The cereal box weight in metric tons is: " << conversion << endl;

//Compute the number of boxes and output to console
numBox = M_TON/ounces;
cout << "The number of cereal boxes needed to hold one metric ton is: " << numBox << endl;

return 0;
}
