//
//  main.cpp
//  Book Exercise 3.33 - Zeller's Congruence
//
//  Created by ax on 9/7/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Title
    cout << "Currency Exchange Calculator \n";
    
    // D
    int input_year = 0;
    int input_month = 0;
    int input_day_of_month = 0;
    int h_sub = 0;
    double h = 0.0;
    double q = 0.0;
    double m = 0.0;
    double j = 0.0;
    double k = 0.0;
    
    // I
    cout << "Enter year: (e.g., 2012 ): ";
    cin >> input_year;
    
    cout << "Enter month: 1-12: ";
    cin >> input_month;
    
    cout << "Enter the day of the month: 1-31: ";
    cin >> input_day_of_month;
    

    // P
    
    // calculate century number (e.g. 1974 is the 20th century)
    j = ceil(input_year/100);
    
    // year of century
    k = input_year % 100;
    
    // month is weird because Zeller makes Jan and Feb 13 and 14 of previous year
    if (input_month == 1 || input_month == 2) {
        // do Jan and Feb stuff
        if (input_month == 1) {
            m = 13;
        } else if (input_month == 2) {
            m = 14;
        }
        // set the year back one for Jan or Feb
        k = k - 1;
    } else {
        m = input_month;
    }
    
    // Run Zeller's Congruence with calculated values
    h_sub = q + ((26 * (m + 1)) / 10) + k + (k / 4) + (j / 4) + (5 * j);
    h = h_sub % 7;
    
    // O
    cout << "OUTPUT H VAL HERE: " << h << endl;
    
    return 0;
    
}