//
// Created by owner on 9/29/2021.
//

#include "boxer.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;


void boxer(){
    //String literal to be printed
    string boxedString;
    //How many asterisks deep the box will be
    int thickness;
    cout << "Type a string to be boxed: ";
    cin >> boxedString;
    cout << "How thick should the box be: ";
    cin >> thickness;
    cout << endl << endl;

    /*
     * The definition of how many lines there are:
     * 3 lines, the one with the string and two lines around it
     * thickness above and below, therefore 2 * thickness
     */
    const int height = 3 + 2 * thickness;
    /*
     * The definition for each column:
     * length of the string (boxedString.length())
     * a space on either side (2)
     * thickness on either side (2*thickness)
     */
    const int width = boxedString.length() + 2 * thickness + 2;

    //What character the box will be made out of
    const char boxChar = '*';
    //Creates a string that is just a bunch of boxChar the width of the box
    string boxLine;
    boxLine.assign(width, boxChar);
    //What character fills the negative space
    const char boxSpaceChar = ' ';
    //Creates a string of the negative space character for easier printing
    string boxSpaceLine;
    boxSpaceLine.assign(width - 2 * thickness, boxSpaceChar);
    for(int i=0; i < height; i++) {
        //If in top or bottom solid part, print a line of boxChar
        if(i < thickness || i >= height - thickness) {
            cout << boxLine;
        }
        //If the middle line print the thickness part, space and the string, space and perimeter of the box again
        else if(i == thickness + 1) {
            cout << boxLine.substr(0, thickness) << boxSpaceChar << boxedString << boxSpaceChar << boxLine.substr(0, thickness);
        }
        //The final line type, thickness boxChar, and then negative space characters until the other side of the box
        else {
            cout << boxLine.substr(0, thickness) << boxSpaceLine << boxLine.substr(0, thickness);
        }
        cout << endl;
    }
}