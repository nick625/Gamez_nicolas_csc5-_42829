/* 
 * File:   coin toss
 * Author: nicolas gamez
 * Created on April 24, 2016, 5:38 PM
 */

//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int coin_toss(void)
{
    int Rnum;
    Rnum=1+rand()%2;
    return Rnum;
}
//Execution Begins Here
int main(int argc, char** argv) {
    int time_flip;//how many time flip
    int Rnum;//random number
    string head_tail="";
    
    cout<<"how many flip"<<endl;
    cin>>time_flip;

    srand((time(0)));
    
    for(int i=1;i<=time_flip;i++)
    {
     Rnum=coin_toss();
     if(Rnum==1)
     head_tail="head";
   
     else
         head_tail="tail";

     cout<<head_tail<<endl;
    }
    return 0;
}

