/* 
 * File: to illustrae rule of 72
 * Author: Nicolas Gamez
 * Created on March 30, 2016, 8:37 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float salary=6e4f;  //$60,000, whatever you think your salary will be!
    float percDep=1e-1f;//10% to save each year from salary,Babylonian 10
    float pv=0.0f;      //Present value of retirement account
    float iRate=0.05f;  //Interest rate from municipal bond investments
    int   nYears=0;     //Years it will take to retire
    const int SIZE=1000;//SIZE of the array
    float fv[SIZE]={};  //Initialize the array to zero  
          fv[0]=pv;     //Retirement account value to known when to retire
    float yrlyDep;      //Yearly Deposit in $'s
    float savRet;       //Savings goal to retire in $'s
    
    //Calculate the savings required to retire and yearly Deposit
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //Output the initial conditions and setup the table
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(5)<<" $"<<setw(11)<<fv[0]<<endl;
    
    //Loop each year until the you meet the savings requirement
    for(nYears=1;fv[nYears-1]<savRet;nYears++){
        fv[nYears]=fv[nYears-1]*(1+iRate);//Yearly interest from bonds, use to purchase more bonds
        fv[nYears]=fv[nYears]+yrlyDep;  //Yearly deposit or bonds to purchase
        cout<<setw(3)<<nYears<<setw(5)<<" $"<<setw(11)<<fv[nYears]<<endl;
    }
    
    //Exit stage right
    return 0;
}