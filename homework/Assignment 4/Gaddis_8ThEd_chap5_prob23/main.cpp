/* 
 * File:   Pattern Display
 * Author: Nicolas Gamez
 * Created on March 30, 2016, 10:09 AM
 */

//system libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
    int A, B, C = 10;
    string str;
    for (A = 1; A <= 10; A++) {
        str = "";
        for (B = 1; B <= A; B++){ //left side
            str += "+";
        }
        cout << left << setw(13) << str;
        str = " ";
        for (B = 1; B <= C; B++){ //left side
//            cout << B << ',' << C << endl;
            str += "+";
        }
        C--;
        cout << str;
        cout << endl;
    }

    return 0;
}

