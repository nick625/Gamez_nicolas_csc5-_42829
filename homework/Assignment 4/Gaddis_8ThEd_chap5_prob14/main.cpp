/* 
 * File: student line up
 * Author: nicolas gamez
 * Created on April 4, 2016, 3:57 PM
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
    int num_stud;//numbers of student
    string stud_name;//students names
    string name;//student 1
    string name_2;//student 2
    
    while (num_stud<1||num_stud>25)
    {
        cout<<"how many students are in the class"<<endl;
        cin>>num_stud;
    }
    for(int i(1);i<=num_stud;i++)
    {
        cout<<"enter student name #"<<i<<endl;
        cin>>stud_name;
        
        if(i==1)
        {
            name=stud_name;
            name_2=stud_name;
        }
        else
        {
            if(stud_name<name)
                name=stud_name;
            else if(stud_name>name_2)
                name_2=stud_name;
        }     
    }
    cout<<"first student is "<<name<<endl;
    cout<<"last student is "<<name_2<<endl;
    return 0;
}

