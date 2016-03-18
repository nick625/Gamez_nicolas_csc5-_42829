/* 
 * File: add two numbers
 * Author: nicolas Gamez
 * Created on March 17, 2016
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
//Declare variables
    float num1;
    float num2;
    float num3;
    
    cout<<"plug in the first number to add"<<num1<<endl;
    cin>>num1;
    
    cout<<"plug in the second number "<<num2<<endl;
    cin>>num2;
    
    //calculate problem 
    num3=num1+num2;
    
    
    
    cout<<"This equals "<<num3<<endl;
    return 0;
}

