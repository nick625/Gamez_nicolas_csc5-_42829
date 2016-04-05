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
    
    int test; //test score
    
    //input test score
    cout<<"Enter test score from 0-100 for letter grade"<<endl;
    cin>>test;
    
    //determine the letter grade
    if (test >=A_score)
        cout<<"your grade is A.";
    if(test>=B_score)
        cout<<"your grade is B";
     if(test>=C_score)
        cout<<"your grade is C";
     if(test>=D_score)
        cout<<"your grade is D";
    else
        cout<<"your grade is F";
    return 0;
}

