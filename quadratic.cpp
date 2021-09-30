//
// Created by owner on 9/29/2021.
//

#include "quadratic.h"
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

void quadratic(){
    float a;
    float b;
    float c;
    cout << "In the form ax^2 + bx + c" << endl << "What is the value of a" << endl;
    cin >> a;
    cout << "What is the value of b" << endl;
    cin >> b;
    cout << "What is the value of c" << endl;
    cin >> c;

    float determinant = b * b + 4 * a * c;
    cout << a << "x^2 + " << b << "x + " << c;
    if(determinant < 0){
        cout << " has no roots";
        return;
    } else if(determinant) {
        cout << " has a root at x = " << -b / (2 * a);
    } else {
        cout << " has two roots at x = " << (-b - std::sqrt(determinant)) / (2*a);
        cout << " and x = " << (-b + std::sqrt(determinant)) / (2*a);
    }
}
