/* 
 * File: celsius temperature table 
 * Author: nicolas gamez
 * Created on April 24, 2016, 5:02 PM
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float celsi(float f);
//Execution Begins Here
int main(int argc, char** argv) {
    float c;
    
    cout<<"The celsius temperature from 0 to 20 F"<<endl;
    
    for(int i=0;i<21;i++)
    {
        c=celsi(i);
        cout<<i<<" degreea of fahrenheit equals to "<<setprecision(2) <<fixed <<c<<" derees of calsius"<<endl;
    }
    return 0;
}

float celsi (float f)
{
    float c;
    c=(5.0/9)*(f-32);
    return c;
}
