/* 
 * File:   sales bar chart
 * Author: nicolas Gamez
 * Created on April 2, 2016, 12:12 PM
 */

//system libraries
#include <iostream>
using namespace std;

 //user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //dsecribe variable    
    int store;
    int star;
    int sales;
    
    //loop store
    for (int store=0;store<5;store++)
    {
        cout<<"enter today's sale for sore"<<store+1<<":"<<endl;
        cin>>sales;
        
        //display calculation star
        star=sales/100;
        
        cout<<"SALES BAR CHART"<<endl;
        cout<<"(Each * = $100)" <<endl;
        cout<<"Store"<<store+1<<":"<<endl;
        //loop star
        for(int i=0;i<star;i++)
        {
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}