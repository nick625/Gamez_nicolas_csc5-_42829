/* 
 * File:   main.cpp
 * Author: nicolas gamez
 * Created on April 1, 2016, 6:45 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    float speed;//how fasted
    int time;//time diver
    float dis;//distance travel
    
    
    
    while(speed<=0)
    {
        cout<<"how fast is the car going in mpg";
        cin>>speed;        
    }       
    
    while(time<1)
    {
        cout<<"how long did the car dive for";
        cin>>time;
    }
    
    cout<<"\nhour\tDistance Traveled\n";
    cout<<"----------------------------\n";
            
    for(int i=1;i<=time;i++)
    {
        dis=speed*i;
        cout<<i<<"\t\t"<<dis<<endl;
    }
    return 0;
}

