/* 
 * File:   markup
 * Author: nicolas Gamez
 * Created on April 25, 2016, 5:00 PM
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calcu_retail(float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    float whole_sale;
    float perce;
    float total_price;
    
    cout<<"the wholesale price and the percentage"<<endl;
    cin>>whole_sale>>perce;
    
    while(whole_sale<0||perce<0)
    {
        cout<<"enter no negative number for wholesale price and the percentage"<<endl;
        cin>>whole_sale>>perce;
    }
    total_price=calcu_retail(whole_sale,perce);
    cout<<"the total is $ "<<total_price;
    return 0;
}

float calcu_retail(float cost,float perce)
{
    float total_cost;
    total_cost=((cost/100)*perce)+cost;
    return total_cost;
}