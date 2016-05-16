/* 
 * File:   
 * Author: nicolas gamez
 * Created on April 26, 2016, 7:26 PM
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float get_sale(string);
void find_high(float,float,float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    float NE_sale;
    float SE_sale;
    float NW_sale;
    float SW_sale;
    for(int i=0;i<4;i++)
    {
        switch(i)
        {
            case 1:
                NE_sale=get_sale("NE");
                break;
            case 2 :
                SE_sale=get_sale("SE");
                break;
            case 3:
                NW_sale=get_sale("NW");
                break;
            default:
                SW_sale=get_sale("SW");
                break;
        }
              find_high(NE_sale,SE_sale,NW_sale,SW_sale);
        }            
    }
 float get_sale(string name)
 {
     float sale;
     cout<<"sale for division "<<name<<" $ "<<endl;
     cin>>sale;
     
     while(sale<0)
     {
         cout<<"no negative re-enter: $"<<endl;
         cin>>sale;      
     }
     return sale;
}
 
void find_high(float NE_sale,float SE_sale,float NW_sale,float SW_sale)
 {
     float high;
     string divis;
     
     if(NE_sale>SE_sale && NE_sale>NW_sale && SE_sale>SW_sale)
     {
         high=NE_sale;
         divis="north East";
     }
     else if(NW_sale>NE_sale && NW_sale>SE_sale && SE_sale>SW_sale)
     {
         high=SE_sale;
         divis="south East";
     }
     else if(NE_sale>SE_sale && NE_sale>NW_sale && NW_sale >SW_sale)
     {
         high=NW_sale;
         divis="north west";
     }
     else
     {
         high=SW_sale;
         divis="South west";
     }
     cout<<"The division with the highest sales is "<< divis<<" with total sales of $ "<<high;
 }

