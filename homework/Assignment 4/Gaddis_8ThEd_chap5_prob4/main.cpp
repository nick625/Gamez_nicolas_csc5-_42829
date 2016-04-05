/* 
 * File:   burned calories
 * Author: nicolas Gamez
 * Created on April 1, 2016, 4:38 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
 float calor;//calories
 float min(3.6f);//minutes
    
    for (int i=5;i<=30;i+=5)
    {
        calor=i*min;
        cout<<"min "<<i<<" : "<<calor<<" calorirs burned"<<endl;
    }
    return 0;
}

