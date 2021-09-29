/*
 * programSelector.cpp
 * Simon Bosse
 * 9/29/2021
 * Make sure to #include all the files you are using
 * Add all functions you will want to run into programs
 * Add a case to the switch statement that runs the program
 */

#include "programSelector.h"
#include "boxer.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void runProgram(){

    //gives list of known programs
    cout << "Which program would you like to run? (type the number inside the brackets)" << endl;
    for(int i=0; i<programs.size(); i++) {
        cout << "[" << i << "]: " << programs.at(i) << endl;
    }

    //Continually asks users what program they would like to run until the a valid answer is given
    int selection = -1;
    while(true){
        cin >> selection;
        if(selection >=0 && selection <= programs.size()){break;}
        cout << "Your selection was outside the bounds please try again." << endl;
    }
    cout << "You have selected " << programs.at(selection) << "." << endl;






    /*
     * ADD SWITCH CASES HERE STATEMENTS HERE
     */
    switch(selection) {
        case 0:
            boxer();
            break;
        case 1:
            cout << "eee";
            break;
        default:
            break;
    }
}