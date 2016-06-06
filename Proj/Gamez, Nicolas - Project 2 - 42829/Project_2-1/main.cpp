/*
 * File: prject 2
 * Author: nicolas gamez
 * Created on April 28, 2016, 2:47 PM
 */

//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream> //Writing to a file
using namespace std;

//User Libraries

//Global Constants
const int COL_SIZE = 10;
const int SHIPS = 6;
const int SHIPE = 6;
const int ROW_SIZE = 5;
//Function Prototypes
void print(char[][COL_SIZE], char[][COL_SIZE], const int);
bool win(int,int);
//Execution Begins Here

int main(int argc, char** argv) {
   
    const char SHIP[SHIPS] = {'S', 'S', 'S', 'S', 'S', 'S'};
    const char Ship[SHIPE] = {'E', 'E', 'E', 'E', 'E', 'E'};
    const int ROW_SIZE = 5;
    unsigned seed = time(0);
    srand(seed);
    
    //Declare Variables
    char FREE = '|';
    int eSunk = 0; // you sunk these
    int aiSunk = 0; // ai sunk these
    bool won;
    int x, y;
    char yn='y';
    char player_grid[ROW_SIZE][COL_SIZE];
    char ai_fake[ROW_SIZE][COL_SIZE];       //display to the player
    char ai_real[ROW_SIZE][COL_SIZE];       //store the ai Ships
   
    do{  
    //initialize
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int colmn = 0; colmn < 10; colmn++) {
            player_grid[row][colmn] = ' ';
            ai_fake[row][colmn]= ' ';      
            ai_real[row][colmn]= ' ';
        }
    }
  

    print(player_grid, ai_fake, ROW_SIZE);
    //Players
    for (int i = 0; i < SHIPS; i++) {
        //ask them to set up their ships
        do {
            do {
                cout << "place your ship " << i + 1 << "(input format col row e.g. 0 0 it a 9X4 grid)" << endl;
                cin >> x>>y;
            } while (x > 9 || x < 0 || y > 4 || y < 0);
            if (player_grid[y][x] == ' ') {
                player_grid[y][x] = SHIP[i];
                print(player_grid, ai_fake, ROW_SIZE);
                
            } else {
                cout << "overlap\n";
            }

        } while (player_grid[y][x] != SHIP[i]);
    }

    //ai placement
    for (int i = 0; i < SHIPS; i++) {
        //ask them to set up their ships
        do {
            x = rand() % 10;
            y = (rand() % 5);
            if (ai_real[y][x] == ' ') {
                ai_real[y][x] = Ship[i];
                  }
        } while (ai_real[y][x] != Ship[i]);
    }
    print(player_grid, ai_fake, ROW_SIZE);
    cout << endl;
    //then if they hit anything mark it in the grid[ row ][ column ]
    do{
        cout << "Please enter your coordinates:";
        cout << "Enter column(0-9): ";
        cin.ignore();
        cin>>y;
        cout << "Enter row(0-4): ";
        cin >> x;
        cout << endl;
    while(y > 9 || y < 0 || x > 4 || x < 0){
        cout << "Please enter your coordinates:";
        cout << "Enter column(0-9): ";
        cin.ignore();
        cin>>y;
        cout << "Enter row(0-4): ";
        cin >> x;  
    }
        if (ai_real[x][y] == 'E') {
             eSunk++;
             ai_fake[x][y] ='X';
            cout << "It was a Hit! \n";
        } else {
            ai_fake[x][y] = 'O';
            cout << "It was a Miss! \n";
        }
         print(player_grid, ai_fake, ROW_SIZE);
         
        //AI gus
        x = rand() % 5;
        y = rand() % 10;
        cout << x << ", " << y << endl;
        if (player_grid[x][y] == 'S') {
              aiSunk++;
            player_grid[x][y] ='X';
            cout << "It was a Hit! \n";
        } else {
            player_grid[x][y] = 'O';
            cout << "It was a Miss! \n";
        }
        print(player_grid, ai_fake, ROW_SIZE);
    }while (!win( eSunk, aiSunk ));
    do
{
	cout << "DO you want to play again?? : Enter a 'y' or 'n' " << endl;
	cin >> yn;

if(yn!='y'&& yn!='Y'&&yn!='n'&&yn!='N')
	cout<< "I only respond to the letters 'y' or 'n'"<< "Try again!!"<< endl;
}while(yn!='y' && yn!='Y' && yn!='n' && yn!='N');
}while (yn=='y' || yn=='Y');

	cout << "you now quit the game" << endl;
        
    return 0;
}

bool win(int es, int as ) {
    if ( es == 6) {
        cout << "you win" << endl;
        return true;
    } else if( as ==6 ) {
        cout << "you lose" << endl;
        return true;
    }else{
        return false;
        
    }
        
}

void print(char grid[][COL_SIZE], char ai[][COL_SIZE], const int ROW_SIZE) {
    cout << "Player\n  ";
    for (int i = 0; i < 10; i++) {
        cout << " " << i;
    }
    cout << endl;
    cout << "   ";
    for (int k = 0; k < 20; k++) {
        cout << "-";
    }
    cout << endl;
    for (int row = 0; row < ROW_SIZE; row++) {
        cout << row << " |";
        for (int colmn = 0; colmn < COL_SIZE; colmn++) {
            cout << grid[row][colmn] << "|";
        }
        cout << endl;
    }
    cout << "AI" << endl;
    for (int row = 0; row < ROW_SIZE; row++) {
        cout << row << " |";
        for (int colmn = 0; colmn < COL_SIZE; colmn++) {
            cout << ai[row][colmn] << "|";
        }
        cout << endl;
    }
    cout << " " << endl;
}
