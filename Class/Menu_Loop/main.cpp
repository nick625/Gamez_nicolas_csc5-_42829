/* 
 * File:To Illustrate the code for
 * developing a menu with a loop
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Author: nicolas Gamez
 * Created on March 28, 2016, 9:42 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the loop variable
    int choice;
    //General Menu Format
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case 1: {
                    int sum=1+2+3+4+5+6+7+8+9+10;
                    cout<<endl;
                    cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
          case 2: {
                    int prod=1*2*3*4*5*6*7*8*9*10;
                    cout<<endl;
                    cout<<"Solution n!(1->10)="<<prod<<endl;
                    cout<<endl;
                    break;
                }
                
           case 3: {
                    float quot=1.0f/2/3/4/5/6/7/8/9/10;
                    cout<<endl;
                    cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                    cout<<endl;
                    break;
                }
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice<='9');
    
    //Exit stage right
    return 0;
}