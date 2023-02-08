#include <iostream>
#include "ECCalculator.h"

using namespace std;
using namespace ECNumbers;

int main()


{
  // read in an integer n
  // your code here
  cout << "Enter a number: ";
  int n; 
  cin >> n; 

  // print out the square of it
  // your code here
  cout << "Squared value is: " << ECSquareN(n) << endl; 

  // print out 2n  
  // your code here
  cout << "Two times the value entered is: " << ECDoubleN(n) << endl; 

  // print out 4 times of n by invoking ECCalculator's function
  // your code here
  cout << "Four times the value entered is: " << ECFourTimesN(n) << endl; 

  return 0;
}
