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

double GInTank, FE, GasPrice, HowFar, cost;

cout<<"Enter the number of gallons of gas in the tank: "<<endl;
cin>>GInTank;

cout<<"Enter the fuel efficiency in miles per gallon: "<<endl;
cin>>FE;

cout<<"Enter the price of gas per gallon: "<<endl;
cin>>GasPrice;

HowFar = GInTank * FE;
cost = (100 / FE) * GasPrice;

cout<<"The car can go for " << HowFar << " miles with the gas in the car"<<endl;

cout<<"The cost per 100 miles is " << cost << " $"<<endl;

return 0;

}
