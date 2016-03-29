/* 
 * File:   right or wrong
 * Author: nicolas gamez
 * Created on March 28, 2016
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
    float num_3;
    cout<<"plug in the first number to add"<<endl;
    cin>>num1;
    
    cout<<"plug in the second number "<<endl;
    cin>>num2;
    
    cout<<"what is the answer"<<endl;
    cin>>num_3;
    
    //calculate problem 
    num3=num1+num2;
    
   cout<<"This equals "<<num3<<endl;
   if (num_3==num3) {
       cout<<"Congratulation"<<endl;
   }else{
       cout<<"Incorrect"<<endl;
   }
   return 0;
}
