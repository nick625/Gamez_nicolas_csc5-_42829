/* 
 * Purpose:nasa+ military budgets 
 * Author: nicolas gmaez
 * Created on March 2, 2016, 10:04 AM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries 

 //global constants 

int main(int argc, char** argv) {
    float nasa_budget= 19.3e9f;
    float military_budget= 601e9f;   
    float fed_budget=3.8e12f;
//calculate the nasa budget. 
float total_nasa_Percent = (nasa_budget / fed_budget) *  100;

//calculate the military budget.
float total_prent_percent = (military_budget / fed_budget) * 100;

//display the total precent.
cout<<"precent of budget " << total_nasa_Percent<<endl;

//display the total precent.
cout<<"precent of military" << total_prent_percent<< endl;
    return 0;
}