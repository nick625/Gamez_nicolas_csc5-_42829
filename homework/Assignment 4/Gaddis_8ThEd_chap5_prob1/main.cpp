/* 
 * File:   main.cpp
 * Author: nicolas Gamez
 * Created on April 1, 2016, 2:29 PM
 */

//system libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int post_num(0);//positive numbers
   int num; 
   
    cout<<"input a postive numbers up to 1-50"<<endl;
    cin>>post_num;
    
    while (post_num++<50)
    {
        if(post_num==4)
           continue;
        cout<<post_num<<"  ";
    }
   
    return 0;
}