/* 
 * File: babylonian square root approximation   
 * Author: Nicolas gamez
 * Created on March 9, 2016, 8:10 AM
 */

//system libraries 
#include <iostream>
using namespace std;

//user libraries

//global constans

//function prototypes

//execution begins here
int main(int argc, char** argv) {
//declare variables 
    float n,r,guess;
    
    //input our number to square root
    cout<<"what number would you like to find the square root of?"<<endl;
    cin>>n;
    
    //calculate the first approximation
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    //output the first approxmation
    cout<<"first approximation = square root ("<<n<<") = r("
           <<r<<"),guess ("<<guess<<")"<<endl;
  
    //calculate the second approxmation
    r=n/guess;
    guess=(guess+r)/2;
   
    //output the second approxmation
    cout<<"second appoximation = square root ("<<n<<") = r("
           <<r<<"),guess ("<<guess<<")"<<endl;
    
    //calculate the Thied approximation
    r=n/guess;
    guess=(guess+r)/2;
   
    //output the Third approxmation
    cout<<"Thid approximation = square root ("<<n<<") = r("
           <<r<<"),guess ("<<guess<<")"<<endl;
   
     //calculate the four approximation
    r=n/guess;
    guess=(guess+r)/2;
   
    //output the four approxmation
    cout<<"four approximation = square root ("<<n<<") = r("
           <<r<<"),guess ("<<guess<<")"<<endl;
  
     //calculate the five approximation
    r=n/guess;
    guess=(guess+r)/2;
   
    //output the five  approxmation
    cout<<"five approximation = square root ("<<n<<") = r("
           <<r<<"),guess ("<<guess<<")"<<endl;
    
    //calculate the six approximation
    r=n/guess;
    guess=(guess+r)/2;
   
    //output the six approxmation
    cout<<"six approximation = square root ("<<n<<") = r("
           <<r<<"),guess ("<<guess<<")"<<endl;
    
    //exit stage left
             return 0;
}

