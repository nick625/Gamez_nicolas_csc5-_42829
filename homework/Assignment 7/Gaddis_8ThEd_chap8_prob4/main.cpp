/* 
 * File:   charge Account vaidation modifcation binary search
 * Author: Nicolas gamez
 * Created on May 28, 2016, 7:02 pM
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=18;
//Function Prototypes
bool List (int,int[]);
//Execution Begins Here
int main(int argc, char** argv) {
    int Check[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850
                     ,8080152,4562555,5552012,5050552,7825877,1250255
                      ,1005231,6545231,3852085,7576651,7881200,4581002 };
    int number=0;
    bool found= true;
    
    cout<<"Enter your account number :"<<endl;
    cin>>number;
    
    if(found==List(number,Check))
       cout<<"Account "<<number<<" is a vaild account"<<endl;
    else
        cout<<"Account "<<number<<" is not a vaild account"<<endl;
        
            
    return 0;
}

bool List(int numb,int lookup[SIZE],int value )
{
	int first=0;
        int last=num-1;
        int middle;
	int pos=-1;
	bool found=false;

	while (!found && first<= last)
	{
            middle = (first+last)/2;
            if(list[middle]==value)
            {
                found=true;
                pos=middle;
            }
            else if(list[middle]>value)
                last=middle-1;
            else
                first= middle+1;
        }
        return pos;
}
