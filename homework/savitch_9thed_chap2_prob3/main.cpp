/* 
 * Author: Nicolas gamez
 *purpose: treadmill readout conversion
 * Created on February 29, 2016, 9:49 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVHRMN=60;//Conversion from Hours to Minutes
unsigned char CNVMNSC=60;//Conversion from Minutes to Seconds

int main(int argc, char** argv) {
    //Declare Variables
    float mph;//Miles per hour
    float fmin;//Pace minutes float
    int   imin;//Pace minutes integers
    float fsec;//Pace residual seconds float
    int   isec;//Pace residual seconds integer
    
    //Prompt for the input mph
    cout<<"Input the miles per hour pace (dd.dd)"<<endl;
    cin>>mph;
    
    //Calculate the pace
    fmin=CNVHRMN/mph;//Floating pace in minutes representation
    imin=static_cast<int>(fmin);
    fsec=(fmin-imin)*CNVMNSC;//Floating pace in seconds
    isec=static_cast<int>(fsec);
    
    //Output the results
    cout<<"The pace in mph = "<<mph<<endl;
    cout<<"The conversion is "<<imin<<"(minutes) "
            <<fsec<<"(seconds) per mile"<<endl;
    
    //Exit Stage Right
    return 0;
}