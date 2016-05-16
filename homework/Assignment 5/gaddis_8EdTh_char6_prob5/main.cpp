 /* 
 * File:   falling distance
 * Author: nicolas gamez
 * Created on April 23,2016, 6:02 PM
 */

//system libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int fall_distan(int t);
//Execution Begins Here
int main(int argc, char** argv) {
    int t;//time falling
  int d;//distance
    
    cout<<"The distance is falling in 10 second is"<<endl;
    
    for(int i=1;i<=10;i++){
        d=fall_distan(i);
        cout<<i<<"seconds: "<<d<<" rate"<<endl;
    }
        
    return 0;
}

int fall_distan(int t){
    int d;
    int g(9.8);
    
    //calculate 
    d=(0.5*g)*(pow(t,2));
    return d;
}
