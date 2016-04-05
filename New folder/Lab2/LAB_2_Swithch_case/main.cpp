/* 
 * File:  grade if 
 * Author: Nicolas gamez
 * Created on March 23, 2016, 9:30 AM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//funcation prototypes 

//Execution being here!
int main(int argc, char** argv) {
    float A_score(90);
    float B_score(80);
    float C_score(70);
    float D_score(60);
    float total;
    
    int test; //test score
    
    //input test score
    cout<<"Enter test score from 0-100 for letter grade"<<endl;
    cin>>test;
    
   
     switch( test >= 90 )
        case true: 
            cout<<"your grade is A."
    switch( test >= 80 )
        case true:
            cout<<"your grade is B.";
    switch( test >= 70 )
        case true:
            cout<<"your grade is C.";
    switch( test >= 60 )
        case true:
            cout<<"your grade is D.";
         default: cout<<"your grade is F";             
      return 0;
}

