/* 
 * File:   which rrectangel is bigger
 * Author: nicolas gamez
 * Created on March 28, 2016, 3:52 PM
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//Global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
   //declare variables
    int lengt_1;//length of one rentangle
    int width_1;//width of one rentangle
    int lengt_2;//length of second rentangle
    int width_2;//width of second rentangle
    float area_1;//area of rentangel
    float area_2;//area of second rentangle
    
    cout<<"input the length of first rectangle"<<endl;
    cin>>lengt_1;
    
    cout<<"input the width of first rectangle"<<endl;
    cin>>width_1;
    
     cout<<"input the length of second rectangle"<<endl;
    cin>>lengt_2;
    
    cout<<"input the width of second rectangle"<<endl;
    cin>>width_2;
    
    //calculate the rentangle
    area_1=lengt_1*width_1;
    area_2=lengt_2*width_2;
   
    //display area
    cout<<"first rectangle area is "<<area_1<<endl;
    cout<<"second rectangle area is "<<area_2<<endl;        
    
    if (area_1>area_2) {
        cout<<"the first rectangle is bigger "<<area_1<<endl;
    }else{
     cout<<"the second rectangle is bigger "<<area_2<<endl;
    }
    if (area_1<area_2) {
        cout<<"the first rectangle is smaller "<<area_1<<endl;
    }else if (area_1>area_2)
     cout<<"the second rectangle is smaller "<<area_2<<endl;
return 0;
}

