/* 
 * File: Calculates the numbers of gallon
 * Author: nicolas Gamez
 * Created on March 3, 2016,
 */

//systeam Libraries
#include <iostream>
using namespace std;
//user Libraries

//global constants

int main(int argc, char** argv) {
    float car_holds =15 ;
    float car_dis = 375;
    
    //calculate miles per gallon
    float mpg = (car_dis / car_holds);
    
    //display the mpg 
    cout<<"total MPG"<<mpg<<endl;
    return 0;
}

