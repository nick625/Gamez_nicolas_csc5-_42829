/* 
 * File:   main.cpp
 * Author: nicolas gamez
 * Created on April 24, 2016, 3:47 PM
 */
//system libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int kinet_energ(int m,int v);
//Execution Begins Here
int main(int argc, char** argv) {
    float ke;//kinetic energy
    int m;// mass
    int v;//velocity
    
    cout<<"mass in kg"<<endl;
    cin>>m;
    cout<<"velocity in maters per second"<<endl;
    cin>>v;
    
    ke=kinet_energ(m,v);
    cout<<"The kintnet energy of the object is " << ke <<endl;
    
    return 0;
}

int kinet_energ(int m,int v)
{
    return (0.5*m)*(pow(v,2));
}