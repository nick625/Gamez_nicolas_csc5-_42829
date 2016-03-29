/* 
 * File:  inputs two number bigger to smaller
 * Author: Nicolas gamez
 * Created on March 28, 2016, 10:03 AM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //decarl vibraries
    int num1;//number one
    int num2;//number two
    
    cout<<"input a number"<<endl;
    cin>>num1;
    
    cout<<"input the second number"<<endl;
    cin>>num2;
    
    if (num1>num2){
    cout<<"the biggies number is "<<num1<<endl;
    }else{
    cout<<"the biggies the number is "<<num2<<endl;
    }
    if (num1<num2)
    cout<<"the smallest number is "<<num1<<endl;
    
     else if (num1>num2)
    cout<<"the smallest the number is "<<num2<<endl;
       
    return 0;
}

