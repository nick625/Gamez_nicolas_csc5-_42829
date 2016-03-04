/* 
 * File: enter numbe of quarters,dimes,and nickels 
 * Author: Nicolas Gamez
 * Created on March 3, 2016, 3:55 PM
 */
//systeam Libraries
#include <iostream>
using namespace std;

//user Libraries
int main ( )
{ 
int quart, dim, nick; 
float pennies; 
cout<<"Enter quarters:"; 
cin>>quart; 
cout<<"Enter dimes:"; 
cin>>dim; 
cout<<"Enter nickels"; 
cin>>nick; 
pennies = 5*nick + 10*dim + 25*quart; 
cout<<"\nThe number of pennis are :"<<pennies; 
return 0;
}