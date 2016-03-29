/* 
 * File:   turn numbers in to roman numeral
 * Author: Nicolas gamez
 * Created on March 28, 2016, 
 */

//system libraries
#include <iostream>
using namespace std;
 
//user libraries

//Global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
    int num;
    
    cout<<"input a number from 1-10"<<endl;
    cin>>num;
    
  switch(num)
{
case 1: cout << "The roman number equivilant is: I. \n";
break;
case 2: cout << "The roman number equivilant is: II. \n";
break;
case 3: cout << "The roman number equivilant is: III. \n";
break;
case 4: cout << "The roman number equivilant is: IV. \n";
break;
case 5: cout << "The roman number equivilant is: V. \n";
break;
case 6: cout << "The roman number equivilant is: VI. \n";
break;
case 7: cout << "The roman number equivilant is: VII. \n";
break;
case 8: cout << "The roman number equivilant is: VIII. \n";
break;
case 9: cout << "The roman number equivilant is: IX. \n";
break;
case 10: cout << "The roman number equivilant is: X. \n";
break;
default: cout << "You did not enter a number from 1-10. \n";
}
    return 0;
}

