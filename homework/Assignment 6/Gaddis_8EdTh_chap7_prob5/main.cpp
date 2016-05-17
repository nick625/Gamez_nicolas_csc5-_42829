/* 
 * File:   monkey business
 * Author: nicolas gamez
 * Created on May 16, 2016, 8:49 PM
 */

//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Libraries
const int numROWS = 3;
const int numCOLS = 5;
//Function Prototypes
void getData(int array[][numCOLS], int);
int getAverage(int array[][numCOLS], int);
int getRowSum(int array[][numCOLS], int);
int getAverage(int array[][numCOLS], int);
int getLeast(int, int, int);
int getMost(int, int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    int monkeys[numROWS][numCOLS];
    int monkey1 = 0, monkey2 = 1, monkey3 = 2, monk1Tot, monk2Tot, monk3Tot, most, least;

    getData(monkeys,numROWS);

    monk1Tot = getRowSum(monkeys, monkey1);
    monk2Tot = getRowSum(monkeys, monkey2);
    monk3Tot = getRowSum(monkeys, monkey3);

    least = getLeast(monk1Tot, monk2Tot, monk3Tot);
    most = getMost(monk1Tot, monk2Tot, monk3Tot);

    cout << "The average daily food consumption by the monkeys was " << getAverage(monkeys, numROWS) << ". \n";
    cout << "The least amount of food consumed within the week by a single monkey was " <<least << ". \n";
    cout << "The greatest amount of food consumed within the week by a single monkey was " << most << ". \n";

}

void getData(int monkeys[][numCOLS],int numROWS)
{
    for (int rows = 0; rows < numROWS; rows++)
        {
        cout << "Monkey " << (rows + 1) << "\n";
        for (int cols = 0; cols < numCOLS; cols++)
            {
            cout << " Day " << (cols + 1) << ": ";
            cin >> monkeys[rows][cols];

            while (monkeys[rows][cols] < 0)
                {
                cout << "ERROR: Please enter a positive number: ";
                cin >> monkeys[rows][cols];
                }
            }

        cout << endl;
        }
}

int getRowSum(int monkeys[][numCOLS], int monkeyNum)
{
    int total = 0;

    for (int rows = 0; rows < monkeyNum; rows++)
    {
        for (int cols = 0; cols < numCOLS;cols++)
            total += monkeys[rows][cols];
    }

    return total;   
}

int getAverage(int monkeys[][numCOLS], int numROWS)
{
    int total = 0;

    for (int cols = 0; cols < numCOLS; cols++)
    {
        for (int rows = 0; rows < numROWS; rows++)
            total += monkeys[rows][cols];
    }

    return (total/(numCOLS));
}

int getMost(int monkey1, int monkey2, int monkey3)
{
    int array[3]{monkey1, monkey2, monkey3};
    int max = array[0];

    for (int count = 0; count < 3; count++)
    {
        if (array[count] > max)
        {
            max = array[count];
        }
    }
        return max;
}

int getLeast(int monkey1, int monkey2, int monkey3)
{
    int array[3]{monkey1, monkey2, monkey3};
    int least = array[0];

    for (int count = 0; count < 3; count++)
    {
        if (array[count] < least)
        {
            least = array[count];
        }
    }
        return least;
}
   

