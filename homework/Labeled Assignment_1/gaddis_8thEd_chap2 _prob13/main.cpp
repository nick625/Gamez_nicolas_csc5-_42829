/* 
 * File:   Selling price
 * Author: nicolas gamez
 * Created on March 3, 2016
 */

//system libraries
#include <iostream>
using namespace std;

//user Libraries

//global constants

int main(int argc, char** argv) {
    float board = 14.95;
    float sell_profit = 0.35;
    
    //calculate profit
    float profit =(board * sell_profit) + board;
    
    //display the total profit
    cout<<"total sell price"<<profit<<endl;
    return 0;
}

