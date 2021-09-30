/*
 * collatz.cpp
 * Simon Bosse
 * 9/29/21
 * Applies 3n+1 if odd, n/2 if even until a number reaches 1
 */

#include "collatz.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void collatz(){
    int collatzSeed = -1;
    int steps = 0;
    while(collatzSeed < 1) {
        cout << "Type a positive integer" << endl;
        cin >> collatzSeed;
    }

    while(collatzSeed > 1) {
        cout << collatzSeed << ' ';
        if(collatzSeed % 2 == 0) {
            collatzSeed /= 2;
        } else {
            collatzSeed *= 3;
            collatzSeed++;
        }
        steps += 1;
    }
    cout << collatzSeed << endl << "It took " << steps << " steps to complete";
}