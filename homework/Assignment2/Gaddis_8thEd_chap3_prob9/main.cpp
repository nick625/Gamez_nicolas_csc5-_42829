/* 
 * File:   main.cpp
 * Author: nicolas gamez
 * Created on March 17, 2016, 4:56 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    float serv(10);
    float clarie(300);
    float cok;
    float ser_cok;
    float ate_cok;
    
    //calculate claries 
    cok=clarie/serv;
     
     ate_cok=cok*ser_cok; 

    //input cookie ate
    cout<<"How many cookies have you ate "<<endl;
    cin>>ate_cok;
   
 
    cout<<"calorie="<<ate_cok<<endl;
    cin>>ate_cok;
  
    return 0;
}

