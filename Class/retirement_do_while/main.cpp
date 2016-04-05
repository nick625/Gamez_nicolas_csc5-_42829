/* 
 * File: to illustrae rule of 72
 * Author: Nicolas Gamez
 * Created on March 30, 2016, 8:37 AM
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
    float salary(6e4f);//$60,000
    float percDep(1e-1f);//10% to save each year
    float pv(0.0f);//present value
    float iRate(0.05f);//interrest rate
    int nYears;//comparson of calculation to the rule of 72
    float fv=pv;//Futre value
    float yrlyDep;//yearly deposit in $'s
    float savRet;//savings to retir in $
    
    //calaulate the apprimate number year to double by rule of 72
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //output the results
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"yearly deposit/Municipal bond purchase = $"<<yrlyDep<<endl;
    cout<<"interest rate ="<<iRate*100<<"&"<<endl;
    cout<<"years future value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<"$"<<fv<<endl;
    
    
    //loop each year until the future value 2x the present value
    do{
        fv*=(1+iRate);//yearly interest rate calculation
        nYears++;
        fv+=yrlyDep;
       cout<<setw(3)<<nYears<<setw(10)<<"$"<<fv<<endl;
       }while (fv<savRet);

//exit stage right   
return 0;
}