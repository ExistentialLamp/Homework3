/*
 * programSelector.cpp
 * Simon Bosse
 * 9/29/2021
 * Make sure to #include all the files you are using
 * Add all functions you will want to run into programs
 * Add an else if statement into the for loop at the bottom that executes the desired funtion
 */

#include "programSelector.h"
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
    cout << "Which program would you like to run? (case-sensitive): ";
    for(int i=0; i<programs.size(); i++) {
        cout << "[" << i << "]: " << programs.at(i) << endl;
    }

    //Continually asks users what program they would like to run until the a valid answer is given
    string selection;
    while(true){
        cout << endl;
        getline(cin, selection);
        for(int i=0; i<programs.size(); i++){
            if(selection == programs.at(i)){
                break;
            }
        }
        cout << "I didn't recognize that program, program names are case sensitive. Please try again.";
    }







    /*
     * ADD STATEMENTS IN THIS FOR LOOP HERE
     */
    //A loop that executes all the functions to run
    for(int i=0; i<programs.size(); i++){
        //If statements in here
        if(selection == programs.at(i)){
            
        }
    }
}