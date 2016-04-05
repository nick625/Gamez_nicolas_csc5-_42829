/* 
 * File:   membership Fees Increase
 * Author: nicolas gamez
 * Created on April 1, 2016, 6:00 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
   float chage(2500);//membership fee
   float in_chage(0.04);//memberships fee increase
   float total_mer;//memberships total
   float year(6);
   
   for(int i=1;i<=year;i++)
   {
       chage=chage+(chage*in_chage);
    cout<<"in "<<i<<" year : $"<<chage<<" membership fee"<<endl;
   }
    return 0;
}

