/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E2.10 - Cost per 100 Miles
Asks the user for the number of gallons of gas in their tank, the fuel effiency in miles per gallon, and the price of gas per gallon.
It then prints the cost per 100 miles and how far the car can go with the gas.
*/

#include <iostream>
using namespace std;

int main()

{
cout << "Enter the number of gallons of gas in your tank"<< endl;
float numgals = 0;
cin >> numgals;

cout << "Enter the the fuel effiency in miles per gallon" << endl;
float mpg = 0;
cin >> mpg;

cout << "Enter the price of gas per gallon" << endl;
float gpg = 0;
cin >> gpg;

int mgas = (numgals * mpg) ;
int cost1 = (100/mpg) * gpg;
cout << " The cost per 100 miles is " << cost1 << " and farthest it can go is " << mgas << " miles." << endl;

return 0;

}
