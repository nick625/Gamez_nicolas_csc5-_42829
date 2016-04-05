/* 
 * File:   winner lottery
 * Author: Nicolas Gamez
 * Created on March 21, 2016, 9:40 AM
 */

//system libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//user libraries

//Global constants

//funcation prototypes 

//Execution being here!
int main(int argc, char** argv) {
    //dispaly variables 
    float win_lott;
    float ex_win;
    float lum_sum_pena(0.62);
    float tax_pena(0.52);
    float marr_equ(0.50);
    
    //input wining lottery
    cout<<"how mush did you win"<<endl;
    cin>>win_lott;
    
    //calculate lump sum penalty
    ex_win=(win_lott*lum_sum_pena);//*tax_pena*marr_equ
    
    //dispaly amount won
    cout<<"you won after all tax lump sum penalty ="<<fixed<<ex_win<<endl;
    ex_win=(win_lott*tax_pena);
    cout<<"you won after all tax penalty ="<<fixed<<ex_win<<endl;
    ex_win=(win_lott*marr_equ);
    cout<<"you won after marriage equity penalty ="<<fixed<<ex_win<<endl;
 
    return 0;
}

