#include <iostream>
//problem 2 firecapacity

using namespace std;

int main (){
  //Variable declaration
  int maxCapacity;
  int numPeople;
  int peopleToAdd;
  int peopleToSubtract;

//Prompts user to enter the maximum capacity then reads it
cout << "Enter the maximum room capacity: " ;
cin >> maxCapacity;

//Prompts user to enter the amount of people in attendance then reads it
cout << "Enter the number of people attending the meeting: " ;
cin >> numPeople;

//Conditional if statement to see if the meeting is legal and
//computes the number of additional people that can legally attend
if (numPeople <= maxCapacity){
  cout << "The meeting is legal to hold." << endl;
  peopleToAdd = maxCapacity - numPeople;
  cout << peopleToAdd << " additional people may attend the meeting!" << endl;
}

//Conditional if statement to see if the meeting is illegal and
//computes the number of people that need to leave the meeting
if (numPeople > maxCapacity){
  cout << "The meeting is illegal to hold." << endl;
  peopleToSubtract = numPeople - maxCapacity;
  cout << peopleToSubtract << " people must leave the meeting in order to meet fire regulations." << endl;
}

return 0;
}
