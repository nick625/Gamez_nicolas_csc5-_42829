/* 
 * File: payroll  
 * Author: nicolas gamez
 * Created on May 16, 2016, 8:08 PM
 */

//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
const int empId = 7; 
	int workers[empId] = {5658846, 4520125, 7895122,
				8777541, 8451277, 1302850,7580489};
int hours[empId]; 
int payRate[empId];
for (int index = 0; index < empId; index++)
{
	cout << "Please enter the hours worked by employee number " << (index+1) << " (ID = " << workers[index] << ") : ";
	cin >> hours[index];
	cout << "Please enter the pay rate for employee number "<< (index+1) << " (ID = " << workers[index] << ") : ";
	cin >> payRate[index];
        do
	{
		cout << "Please enter the hours worked by employee number " << (index+1) << " (ID = " << workers[index] << ") : ";
		cin >> hours[index];

		if(hours[index] < 0)
		{
			cout << "Enter in a positive number" << endl; 
		}
	}
	while(hours[index] < 0); 
	
	do
	{
		cout << "Please enter the pay rate for employee number "<< (index+1) << " (ID = " << workers[index] << ") : ";
		cin >> payRate[index];

		if(payRate[index] < 6)
		{
			cout << "The pay rate must be >= 6" << endl; 
		}
	}
	while(hours[index] < 6);
}


cout << "This is the gross pay for each employee:\n";
cout << fixed << showpoint << setprecision(2);

for (int index = 0; index < empId; index++)
{
	int grossPay = hours[index] * payRate[index];
	cout << "Employee #" << (index + 1);
	cout << ": earned $" << grossPay << endl << endl;
}
return 0;
}
