/* 
 * File: google tax in us vs ireland
 * Author: Nicolas gamez
 * Created on March 2, 2016, 2:31 PM
 */

//system Libraries
#include <iostream>
using namespace std;

//user Libraries

//global constants
int main(int argc, char** argv) {
    float us=0.4;
    float land=0.125;
    float google=18.7e9f;
    //calculate tax in the us.
    float taxs_us =(google * us) * 100;
    
    //calculate ireland taxs
    float taxs_land =(google * land) * 100;
    
    //display the total taxs in us.
 cout<<"total taxs in the us" <<taxs_us<<endl;
    
    //display the total taxs in ireland
 cout<<"total taxs in the ireland"<<taxs_land<<endl;
    return 0;
}

