/* 
 * File:  largest/smallest array values
 * Author: Nicolas gamez
 * Created on May 9, 2016, 10:09 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int NUM = 10;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int mnum; //Maximum number
    int bnum; //Minimum number
    int a[NUM];

    cout << "Enter 10 value" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter value: " << endl;
        ;
        cin >> a[i];
    }
    mnum = a[0];
    bnum = a[0];
    for (int i = 1; i < 10; i++) {
        if (mnum > a[i]) {
            mnum = a[i];
        } else if (bnum < a[i]) {
            bnum = a[i];
        }
    }

    cout << "Maximum number is: " << bnum << endl;
    cout << "Minimum number is: " << mnum << endl;
    return 0;
}

