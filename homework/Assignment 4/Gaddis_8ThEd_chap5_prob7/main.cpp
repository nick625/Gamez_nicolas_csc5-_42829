/* 
 * File:   pennies for pay
 * Author: nicolas Gamez
 * Created on April 1, 2016, 7:46 PM
 */

//system libraries
#include <iostream>
using namespace std;

 //user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    int num_day(1);
    float money(1.0);//1 penny
    float total;
    float day_pay;
    
    cout<<"input days of work";
    cin>>num_day;
    
    while(num_day<1)
    {
        cout<<"enter day of work";
        cin>>num_day;
    }
    for(int i=1;i<=num_day;i++)
    {
        day_pay=money/100;
         cout<<"Day "<<i<<" earned $"<<day_pay<<endl;
        total+=day_pay;
        money*=2;
    }
    cout<<"total earning are $"<<total<<endl;
    return 0;
}

