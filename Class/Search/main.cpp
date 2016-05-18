/* 
 * File: search a random array
 * Author: Nicolas gamez
 * Created on May 18th, 2016, 8:35 AM
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
int  binSrch(int [],int,int);//Binary Search
int  linSrch(int [],int,int);//Linear Search
void mrkSort(int [],int);//Sort the whole array
void smlNLst(int [],int, int);//Find smallest in list from a position
void swap(int &,int &);//Swap elements
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
    
    //Test Linear Search
    int val=99;
    int pos=linSrch(array,SIZE,val);
    if(pos<0)cout<<"Linear search did not find "<<val<<endl;
    else cout<<"Value of "<<val<<" found at position "<<++pos<<endl;
    
    //Test the smallest in list
    mrkSort(array,SIZE);
    
    //Test Binary Search
    val=50;
    pos=binSrch(array,SIZE,val);
    if(pos<0)cout<<"Binary search did not find "<<val<<endl;
    else cout<<"Value of "<<val<<" found at position "<<++pos<<endl;
    
    //Print the array
    prntAry(array,SIZE,10);

    //Exit Stage Right!
    return 0;
}

int  binSrch(int a[],int n,int val){
    //Define range and midpoint
    int beg=0,end=n-1,middle=(beg+end)/2;
    //Loop until found
    while(end>=beg){
        if(a[middle]==val)return middle;
        else if(a[middle]>val)end=middle-1;
        else beg=middle+1;
        middle=(beg+end)/2;
    }
    return -1;
}

int  linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;//Found at index i, position ++i
    }
    return -1;//Not found
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlNLst(a,n,i);
    }
}

void smlNLst(int c[],int l,int pos){
    for(int i=pos+1;i<l;i++){
        if(c[pos]>c[i])swap(c[pos],c[i]);
    }
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
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