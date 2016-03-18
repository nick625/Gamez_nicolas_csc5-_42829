/* 
 * File:   
 * Author: nicolas Gamez
 * Created on March 17, 2016, 4:25 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    float classA;
    float classB;
    float classC;
    float sold_tick;
    
    cout<<"how many class A ticket sold"<<endl;
    cin>>classA;
    
    cout<<"how many class B ticket sold"<<endl;
    cin>>classB;
    
    cout<<"how many class C ticket sold"<<endl;
    cin>>classC;
    
    //caculate sold ticket
    sold_tick=(15*classA)+(12*classB)+(9*classC);
            
   //display solde ticket
     cout<<"sold ticket"<<sold_tick<<endl;
    cin>>sold_tick;
    return 0;
}

