/* 
 * File: sales taxs
 * Author: nicolas gamez
 * Created on March 3, 2016, 5:03 PM
 */

//system Libraries
#include <iostream>
using namespace std;

//user Libraries

//global constants

int main(int argc, char** argv) {
    float purcha = 95;
    float St = 0.04;
    float sale_tax =0.02;
    
    //calculate total tax
    float total_tax =(purcha * St * sale_tax) * 100+ purcha;
    
    //display the total tax
    cout<<"total sales"<< total_tax<<endl;
    return 0;
}

