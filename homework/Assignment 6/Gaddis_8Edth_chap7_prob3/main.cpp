/* 
 * File: chips and salsa
 * Author: nicolas gamez
 * Created on May 15, 2016, 8:08 PM
 */

//system libraries 
#include <iostream>
#include <iomanip>
using namespace std;

///User Libraries

//Global Constants
const int size = 5;
//Function Prototypes
int lowest(int[], int);
int highes(int[], int);
//Execution Begins Here
int main(int argc, char** argv) {
int lowes;//lowest
int highe;//highest
string salsa [size]=
    {
   "Mild", "Medium", "Hot", "Zesty", "Sweet"
    };
int sales[5];

cout << "Salsa sales manager\n";

cout<<"Please enter the amount of Mild salsa sold: ";
cin>>sales[0];

 cout<<"Please enter the amount of Medium salsa sold: ";
 cin>>sales[1];

 cout << "Please enter the amount of Hot salsa sold: ";
 cin >> sales[2];
 
 cout<<"Please enter the amount of Zesty salsa sold: ";
 cin>>sales[3];

 cout << "Please enter the amount of Sweet salsa sold: ";
 cin >> sales[4];
 
  cout << "\n\nHere are the results, according to your input\n\n";

  cout << "Mild: "  << sales[0]<<"\n";
  cout << "Medium: "  << sales[1]<<"\n";
  cout << "Hot: "    << sales[2]<<"\n";
  cout << "Zesty: "   << sales[3]<<"\n";
  cout << "Sweet: "   << sales[4]<<"\n";

  lowes = lowest(sales, size);
    cout << "The least successful salsa type is "
         << salsa[lowes]
         << endl;

  highe = highes(sales, size);
  cout << "The most successful salsa type was "
       << salsa[highe]
       << endl;
    return 0;
}

int lowest(int sales[], int size){
  int x = 0;
  for(int i=0; i<size; i++)
  {
  if(sales[i] < sales[x])
  x = i;
  }
  return x;
}

int highes(int sales[], int size){
    int x = 0;
    for(int i=0; i<size; i++)
    {
        if (sales[i]> sales[x])
            x=i;
    }
    return x;
}

