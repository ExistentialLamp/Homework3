//
// Created by owner on 9/29/2021.
//

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