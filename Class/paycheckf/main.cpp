/* 
 * File:   pay cheek indepdent 
 * Author: Nicolas gamez
 * Created on March 16, 2016, 8:50 AM
 */

//system libraries  
#include <iostream>
using namespace std;


//user libraries

//Global constants

//funcation prototypes 

//Execution being here!
int main(int argc, char** argv) {
//declare variables
    float payRate,hrsWrkd,payChk;
    float ovrTime=40;//where overtime begins
    
    //input values
    cout<<"input pay rate ($'S/hr) and hours Worked both dd.dd fomat"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map the inputs to the outputs
    switch(hrsWrkd < 0 || hrsWrkd > 98){
        case true: payChk=0;break;
        default:
        switch(hrsWrkd <= ovrTime){
            case true: payChk=hrsWrkd*payRate;break;
            default: payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
        }
}
        //output the results
    cout<<"paycheck = $"<<payChk<<"for"
            <<hrsWrkd<<"hors worked @ $"<<payRate<<"/hr"<<endl;
    
    //Exit stage rigjt!
    return 0;
}

