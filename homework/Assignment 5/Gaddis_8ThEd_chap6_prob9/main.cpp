/* 
 * File:  present value
 * Author: nicolas Gamez
 * Created on April 25, 2016, 4:31 PM
 */
 
//system libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float prent_value(float,float,int);
//Execution Begins Here
int main(int argc, char** argv) {
    float F;//future value
    float r;//interest
    int n;// number of year
    float P;
    
    cout<<"how mush do you want to save"<<endl;
    cin>>F;
    cout<<"Interest rate"<<endl;
    cin>>r;
    cout<<"years you want to be saving"<<endl;
    cin>>n;
    
    P=prent_value(F,r,n);
    
    cout<<"In order to save $ "<<F<<" you need to deposit $"<<P<<endl;
    
    return 0;
}

float prent_value(float F,float r,int n){
    float P;
    P=F/(pow(1+(r*0.01),n));
    return P;
}

