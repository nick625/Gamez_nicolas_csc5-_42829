/* 
 * File:   square display
 * Author: Nicolas Gamez
 * Created on March 30, 2016, 9:53 AM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins her
int main(int argc, char** argv) {
    int num;
   
    cout<<"input a number 1-15"<<endl;
    cin>>num;
    
    for(int i(1);i<=num;i++)
    {
        for(int X=1;X<=num;X++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
            
    return 0;
}

