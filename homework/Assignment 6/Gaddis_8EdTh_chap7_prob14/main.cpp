/* 
 * File:   Lottery Application
 * Author: Nicolas gamez
 * Created on May 16, 2016, 9:44 AM
 */

//system libraries 
#include <iostream>
#include <cstdlib>	
#include <ctime>
using namespace std;

///User Libraries

//Global Constants
const int SIZE = 5;
const int Digit = 10;

//Function Prototypes
int genLot(int [], int, int);
int userin(int[],int);
int matCon(int[], int[], int);
void disNum(int[], int[]);
void winLos(int);
//Execution Begins Here
int main(int argc, char** argv) {
    int lott[5] = {0,0,0,0,0};//random  number
    int user[5] = {0,0,0,0,0};//input number
    int match = 0;//dame number
    
    genLot(lott, SIZE, Digit);
    userin(user, SIZE);
    match = matCon(lott,user, match);
    disNum(lott,user);
    winLos(match);
    return 0;
}

int genLot(int lott[], int , int)
{
	unsigned seed = time(0);
	srand(seed);

	for (int y=0; y<SIZE; y++)
	{
		lott[y] = rand() % Digit;
	}
	
	return lott[0], lott[1], lott[2], lott[3], lott[4];

}

int userin(int user[], int){
    cout<<"lottery simulator"<<endl;
    for (int y=0; y<SIZE; y++)
    {
        cout<<"chose a from number 0-9"<<endl;
        cin>>user[y];
        while(user[y]<0||user[y]>9)
        {
             cout<<"Error,chose a from number 0-9"<<endl;
             cin>>user[y];
        }
        
    }   
    return user[0], user[1], user[2], user[3], user[4];
}

int matCon(int lotto[], int input[], int)
{
    int match = 0;

	for (int x = 0; x < SIZE; ++x)
	{
		if (lotto[x] == input[x])
			match = match + 1;
	}

	return match;
}

void disNum(int lott[], int user[])
{
    cout << "\nThe winning lottery numbers are: " << lott[0] << " " << lott[1] << " " << lott[2] << " " << lott[3] << " " << lott[4] << endl;
    cout << "Your lottery numbers are: " << user[0] << " " << user[1] << " " << user[2] << " " << user[3] << " " << user[4] << endl;
}

void winLos(int match)
{
    cout << "You matched " << match << " numbers";

	if (match != SIZE)
		cout << "\nSorry--you lose. Better luck next time.\n";
	else
            cout << "\nCongratulations--you WIN!!!!\n";
}

