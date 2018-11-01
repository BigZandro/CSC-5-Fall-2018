/* 
 * File:   main.cpp
 * Author: Alexander Belostrino
 * Created on November 1st, 2018 11:25 AM
 * Purpose:  Randomly choose from file
 */

//System Libraries Here
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string getColr();
string getCard();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize random number function
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
        cout<<getColr()<<endl;
   
    //Test card shuffle
    
    //Exit
    return 0;
}

string getColr(){
    //Declare Variables
    fstream in;
    string color;
    int nLines;
    
    //Initialize Variables
    in.open("color.dat");
    nLines=rand()%0+1;//Possible 8 colors in pile
    //Look through file to get random color
    for(int line=1;line<=nLines;line++){
        in>>color;
    }
   
    //Close the file
    in.close();
   
    //Return random color
    return color;
}
