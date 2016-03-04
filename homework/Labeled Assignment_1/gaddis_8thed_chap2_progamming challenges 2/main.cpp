/* 
 * File: the east coast company 
 * Author: nicolas gamez
 * Created on March 3, 2016
 */

//system Libraries
#include <iostream>
using namespace std;

//user Libraries

//global constants

int main(int argc, char** argv) {
    float com_gen =8.6e9f;
    float total_sales = 0.56;
    
    //calcuate earning this year
    float earn_year = (com_gen * total_sales) * 100 + com_gen;
    
    //dispaly the eraning this yeat=r
    cout<<"this year earning"<<earn_year<<endl;
    return 0;
}

