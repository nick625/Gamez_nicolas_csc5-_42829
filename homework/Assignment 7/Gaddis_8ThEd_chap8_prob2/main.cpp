/* 
 * File:   Lottery Winners
 * Author: Nicolas gamez
 * Created on May 25, 2016, 1:04 pM
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int SIZE =10;
//Function Prototypes
int SList (int[],int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    int tick[SIZE]= {13579,26791,26792,33445,55555,
		        62483,77777,79422,85647,93121 };
	int win;
	int result;

	cout << "\nPlease enter this week's winning 5-digit number: ";
	cin >> win;

	result=SList(tick,SIZE,win);

	if (result==-1)
		cout << "None of your tickets is a winner.\n";
	else
		cout << "Your ticket is a winner this week." << endl;
	return 0;
}

int SList (int list[],int num,int value)
{
	int index=0;
	int pos=-1;
	bool found=false;

	while (index<num&&!found)
	{
		if (list[index]==value)
		{
			found=true;
			pos=index;
		}
		index++;
	}
	return pos;
}

