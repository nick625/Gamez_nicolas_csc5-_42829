/* 
 * File:   ocean levels
 * Author: Nicolas gamez
 * Created on April 1, 2016, 4:26 PM
 */

//system libraries 
#include <iostream>
using namespace std;

 //user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    float level(0);
    int year(25);
    
    for (int i=1;i<=year;i++)
    {
        level+= 1.5;
        cout<<"year"<<i<<":"<<level<<"mm"<<endl;
    }
    return 0;
}

