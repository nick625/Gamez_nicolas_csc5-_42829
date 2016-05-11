/* 
 * File:   rainfall statiics 
 * Author: Nicolas gamez
 * Created on May 9, 2016, 10:38 AM
 */

//system libraries
#include <iostream>
using namespace std;

///User Libraries

//Global Constants
const int NUM=12;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   //declare variables
    int lowtRa;//lowest rainfall
    int highRa;//highest rainfall
    int a[NUM];
    int totRa;//total rainfall
    int sum=0;
    int avg;
    cout<< "Enter the total rainfall for each of the 12 months"<<endl;
     for (int i = 0; i < 12; i++) {
         cout<<"month "<<i+1<<":"<<endl;
         cin>>a[i];
         while(a[i]<0)
         {
              cout<<"month "<<i+1<<":"<<endl;
         cin>>a[i];
         }
        sum += a[i];
     }
    lowtRa = a[0];
    highRa = a[0];
    for (int i = 1; i < 12; i++) {
        if (lowtRa > a[i]) {
            lowtRa = a[i];
        } else if (highRa< a[i]) {
            highRa = a[i];
        }
  }
    avg = sum / 12;
   cout<<"month: "<<" highest rainfall with "<<highRa << endl;
    cout<<"month: "<<" lowest rainfall with "<<lowtRa << endl;
    cout<<"total rain rainfall "<<sum <<endl;
    cout<<"the total average rainfall is "<<avg<<endl;
    return 0;
}

