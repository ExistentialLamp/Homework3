//
// Created by owner on 9/29/2021.
//

#include "quadratic.h"
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::sqrt;

void quadratic(){
    //constants for the equation
    float a;
    float b;
    float c;

    //gets constants from user
    cout << "In the form ax^2 + bx + c" << endl << "What is the value of a" << endl;
    cin >> a;
    cout << "What is the value of b" << endl;
    cin >> b;
    cout << "What is the value of c" << endl;
    cin >> c;

    /*
     * if less than 0, no solution. negative square roots are imaginary
     * if 0, 1 solution. if determinant is 0, x = -b/2a.
     * if greater than 0, two solutions. two solutions because positive and negative sqrt(determinant)
     */
    float determinant = b*b - 4*a*c;
    cout <<"(" << a << ")x^2 + (" << b << ")x + (" << c << ")";
    //
    if(determinant < 0){
        cout << " has no roots";
        return;
    } else if(determinant ==  0) {
        cout << " has a root at x = " << -b / (2*a);
    } else {
        cout << " has two roots at x = " << (-b - sqrt(determinant)) / (2*a);
        cout << " and x = " << (-b + sqrt(determinant)) / (2*a);
    }
}