/*
Title:Chapter 2 Exercise 18 - Energy Drink Consumption
File name:Chapter2Ex18_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:9/26/2024
Requirements:
    18. Energy Drink Consumption

    A soft drink company recently surveryed 16,500 of its customers and found that approximately 15 percent of 
    those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks,
    approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the 
    following:
        
        -The approximate number of customers in the survey who purchase one or more energy drinks per week.
        -The approximate number of customers in the survey who prefer the citrus flavored energy drinks.

    Once you have coded this and placed in your main branch in GitHub, create a second branch that revises 
    your code so that the user can enter the number of customers that were surveyed.
*/

#include <iostream>
using namespace std;
const double amountSurveyed = 16500;
const double amtGreaterThanOne = 0.15;
const double preferCitrus = 0.58;

int main()
{
    double customersOneOrMore = amountSurveyed * amtGreaterThanOne;
    double customersPrefering = amountSurveyed * preferCitrus;
    cout << "The amount of surveyed customers who buy one or more energy drinks a week: " << customersOneOrMore << endl;
    cout << "The amount of surveyed customers who prefer citrus: " << customersPrefering << endl;
    return 0;
}

