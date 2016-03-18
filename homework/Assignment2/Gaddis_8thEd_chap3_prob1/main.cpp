/* 
 * File:   calculates a car's milege
 * Author: Nicoilas Gamez
 * Created on March 17, 2016, 3:49 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float gas_tank_full;
    float dis_car;
    float mph;
    cout<<"how musch gallons of gas can the car hold"<<endl;
    cin>>gas_tank_full;
    
    cout<<"how many miles can it go in a full tank"<<endl;
    cin>>dis_car;
    
    //calculate the mph
    mph =dis_car/gas_tank_full;
    
    //dispaly mph
    cout<<"The car can dive"<<mph<<endl;
    return 0;
}

