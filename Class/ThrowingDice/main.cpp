/* 
 * File:  using random numbers check out stats of dice
 * Author: Nicolas gamez
 * Created on April 27, 2016, 8:05 AM
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char sumDie,die1,die2;
    unsigned short nThrows=36000;
    unsigned short freq2=0,freq3=0,freq4=0,freq5=0,freq6=0,
            freq7=0,freq8=0,freq9=0,freq10=0,freq11=0,freq12=0;
    
    //Throw the Dice
    for(unsigned short thrwDie=1;thrwDie<=nThrows;thrwDie++){
        //Randomly generate the throw and the sum
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sumDie=die1+die2;//[2,12]
        switch(sumDie){
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            case 7:freq7++;break;
            case 8:freq8++;break;
            case 9:freq9++;break;
            case 10:freq10++;break;
            case 11:freq11++;break;
            case 12:freq12++;break;
            default:cout<<"Bad Result"<<endl;
        }
    }
    
    //Output the results
    cout<<"The total throw of the Die = "<<nThrows<<endl;
    cout<<"2 was thrown "<<freq2<<" times"<<endl;
    cout<<"3 was thrown "<<freq3<<" times"<<endl;
    cout<<"4 was thrown "<<freq4<<" times"<<endl;
    cout<<"5 was thrown "<<freq5<<" times"<<endl;
    cout<<"6 was thrown "<<freq6<<" times"<<endl;
    cout<<"7 was thrown "<<freq7<<" times"<<endl;
    cout<<"8 was thrown "<<freq8<<" times"<<endl;
    cout<<"9 was thrown "<<freq9<<" times"<<endl;
    cout<<"10 was thrown "<<freq10<<" times"<<endl;
    cout<<"11 was thrown "<<freq11<<" times"<<endl;
    cout<<"12 was thrown "<<freq12<<" times"<<endl;
    cout<<"The total throw of the Die = "<<(freq2+freq3+freq4+
            freq5+freq6+freq7+freq8+freq9+freq10+freq11+freq12)<<endl;
    
    //Exit Stage Right!
    return 0;
}