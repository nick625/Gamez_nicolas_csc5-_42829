/* 
 * File: to illustrae rule of 72
 * Author: Nicolas Gamez
 * Created on March 28, 2016, 8:10 AM
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
//declare variables
    float pv(100.0f);//present value
    float iRate(0.004f);//interrest rate
    int nComp;//number of compunding periods by rule of 72
    int nYears;//comparson of calculation to the rule of 72
    float fv=pv;//Futre value
    
       //calaulate the apprimate number year to double by rule of 72
    nComp=0.72f/iRate;
    
    //output the results
    cout<<"prrsent value = $"<<pv<<endl;
    cout<<"interest rate ="<<iRate*100<<"&"<<endl;        
    cout<<"years future value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<"$"<<fv<<endl;
    
    //loop each year until the future value 2x the present value
    cout<<"years future value"<<endl;
    cout<<setw(3)<<nYears<<"$"<<fv<<endl;
    do{
        fv*=(1+iRate);
        nYears++;
    }while(fv<2*pv); 
    
    //otput the results
    cout<<"By the Rule of 72 it will take"<<nComp<<"year to double"<<endl;
    cout<<"the future value + $"<<fv<<endl;
    cout<<"the number of years to more than double ="<<nYears<<endl;
    

    return 0;
}

