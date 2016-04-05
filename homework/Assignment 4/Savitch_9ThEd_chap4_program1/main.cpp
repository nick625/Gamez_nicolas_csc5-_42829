/* 
 * File:   liter to gallons and repeat
 * Author: nicolas gamez
 *
 * Created on April 1, 2016, 12:08 PM
 */

//System Libraries
#include <iostream>
#define MPG (0.264179) 
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float liter;//liters to gallons
    float dis;//distance of car 
    float mpg;//miles per gallon
    char redo;
    
    do
{
cout << "Enter the amount of gasoline in liters: ";
cin >> liter;
cout << "\n";

cout << "Enter the number of miles traveled: ";
cin >> dis;
cout << "\n";

//calculate miles per gallon
mpg = dis/(liter * MPG);



cout << "The gas mileage of this travel is " << mpg << endl;

cout << "\n";

cout << "Do you want to run this program again(yes=1, no=0)? ";
cin >> redo;
cout << "\n";

}while(redo == '1');

return 0;
}

