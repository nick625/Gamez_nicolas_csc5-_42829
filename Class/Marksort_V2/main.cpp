/* 
 * File:
 * Author: Nicolas gamez
 * Created on May 18th, 2016, 8:05 AM
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <iomanip> //Format
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void mrkSort(int [],int);//Sort the whole array
void prntAry(int [],int, int);//Print the array with columns
void fillAry(int [],int);//Fill array with 2 digit random numbers

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100;
    int array[SIZE];
    
    
    //Fill the array
    fillAry(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test the smallest in list
    mrkSort(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);

    //Exit Stage Right!
    return 0;
}

void mrkSort(int c[],int n){
    for(int i=0;i<n-1;i++){
    for(int k=i+1;k<n;k++)
    {if(c[i]>c[k]){
    c[i]=c[k]^c[i];
    c[k]=c[i]^c[k];
    c[i]=c[i]^c[k];
    }
    }
    }
}



void prntAry(int b[],int m, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//2 digit random number
    }
}