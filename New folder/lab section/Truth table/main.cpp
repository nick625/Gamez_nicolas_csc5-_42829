/* 
 * File: truth table 
 * Author: Nicolas gamez
 * Created on March 14, 2016, 9:16 AM
 */

//system libraries
#include <iostream>
using namespace std;
//user libraries 

//global constant 
int main(int argc, char** argv) {
    
    bool x=true;
    bool y=true;
    bool noty=false;
    bool notx=false;
    bool xandy=x&&y;
    bool xory=x||y;
    bool xeory=x^y;
    bool xeoryeory=x^y^y;
    bool xeoryeorx=x^y^x;
    bool notxandy=!(x&&y);
    bool notxeornoty=!x||!y;
    bool notxory=!(x||y);
    bool notxandnoty=!x&&!y;
    
    
    cout<<"X   Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y   X^Y^X   !(X&&Y)    !X||Y   !(X||Y)   !x&&!y"<<endl;
   cout<<""<<(x?"T":"F")<<"   "<<(y?"T":"F")<<"   "<<(!x?"T":"F")<<"   "<<(!y?"T":"F")<<"  "<<(x&&y?"T":"F")<<"     "<<(x||y?"T":"F")<<"     "<<(x^y?"T":"F")<<"     "<<(x^y^y?"T":"F")<<"      "<<(x^y^x?"T":"F")<<"        "<<(!(x&&y)?"T":"F")<<"         "<<(!x||y?"T":"F")<<"        "<<(!(x||y)?"T":"F")<<"           "<<(!x&&!y?"T":"F")<<endl;
    
    x=true;
    y=false;
    noty=false;
    notx=true;
    xandy=x&&y;
    xory=x||y;
    xeory=x^y;
    xeoryeory=x^y^y;
    xeoryeorx=x^y^x;
    notxandy=!(x&&y);
    notxeornoty=!x||!y;
    notxory=!(x||y);
    notxandnoty=!x&&!y;
    
   cout<<""<<(x?"T":"F")<<"   "<<(y?"T":"F")<<"   "<<(!x?"T":"F")<<"   "<<(!y?"T":"F")<<"  "<<(x&&y?"T":"F")<<"     "<<(x||y?"T":"F")<<"     "<<(x^y?"T":"F")<<"     "<<(x^y^y?"T":"F")<<"      "<<(x^y^x?"T":"F")<<"        "<<(!(x&&y)?"T":"F")<<"         "<<(!x||y?"T":"F")<<"        "<<(!(x||y)?"T":"F")<<"           "<<(!x&&!y?"T":"F")<<endl;
   
    x=false;
    y=true;
    noty=true;
    notx=false;
    xandy=x&&y;
    xory=x||y;
    xeory=x^y;
    xeoryeory=x^y^y;
    xeoryeorx=x^y^x;
    notxandy=!(x&&y);
    notxeornoty=!x||!y;
    notxory=!(x||y);
    notxandnoty=!x&&!y;
    
    cout<<""<<(x?"T":"F")<<"   "<<(y?"T":"F")<<"   "<<(!x?"T":"F")<<"   "<<(!y?"T":"F")<<"  "<<(x&&y?"T":"F")<<"     "<<(x||y?"T":"F")<<"     "<<(x^y?"T":"F")<<"     "<<(x^y^y?"T":"F")<<"      "<<(x^y^x?"T":"F")<<"        "<<(!(x&&y)?"T":"F")<<"         "<<(!x||y?"T":"F")<<"        "<<(!(x||y)?"T":"F")<<"           "<<(!x&&!y?"T":"F")<<endl;
   
    x=false;
    y=false;
    noty=true;
    notx=true;
    xandy=x&&y;
    xory=x||y;
    xeory=x^y;
    xeoryeory=x^y^y;
    xeoryeorx=x^y^x;
    notxandy=!(x&&y);
    notxeornoty=!x||!y;
    notxory=!(x||y);
    notxandnoty=!x&&!y;
    
    cout<<""<<(x?"T":"F")<<"   "<<(y?"T":"F")<<"   "<<(!x?"T":"F")<<"   "<<(!y?"T":"F")<<"  "<<(x&&y?"T":"F")<<"     "<<(x||y?"T":"F")<<"     "<<(x^y?"T":"F")<<"     "<<(x^y^y?"T":"F")<<"      "<<(x^y^x?"T":"F")<<"        "<<(!(x&&y)?"T":"F")<<"         "<<(!x||y?"T":"F")<<"        "<<(!(x||y)?"T":"F")<<"           "<<(!x&&!y?"T":"F")<<endl;
    return 0;
}

