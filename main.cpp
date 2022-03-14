#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "mat.hpp"
#include <time.h>
using namespace std;
/**
 * @brief This is a cool main
 * 
 * @return int 
 */

void randomizer(int &cols, int &rows, char &a,char &b){
    srand(time(0));
    // Randomily generate odd numbers as rows and cols.
    cols = 1+(2*(rand()%100));
    rows = 1+(2*(rand()%100));

    // Randomliy generate characters
    static const char symbols[] =
        "0123456789" // numbers
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ" // Upper letters
        "abcdefghijklmnopqrstuvwxyz" // lower letters
        "!@#$%^&*-+=~"; // symbols
    a = symbols[rand()% sizeof(symbols)-1];
    b = symbols[rand()% sizeof(symbols)-1];

}

int main(){
    int cols, rows;
    char a,b;
    std::string flag;
    while (flag != "Exit"){
        cout << "Options Menu: \n 1.Insert Random for random mat. \n 2.Insert Auto for manual enter. \n 3.Insert Exit..." << endl;
        cin >> flag;
        if(flag == "Random"){
            randomizer(cols,rows,a,b);
            cout << cols <<" ,"<< rows << " ," << a << " ," << b << endl;
            cout << ariel::mat(cols,rows,a,b) << endl;
        }
        else if(flag == "Auto"){
            cout << "You chose to enter manually" << endl;
            cout << "Insert n.o of cols:" << endl;
            cin >> rows;
            cout << "Insert n.o of rows:" << endl;
            cin >> cols;
            cout << "Insert symbol A" << endl;
            cin >> a;
            cout << "Insert Symbol B" << endl;
            cin >> b;
        }
    }
    
}

/*
 while(!std::isprint(a) || !std::isprint(b)){
        if(!std::isprint(a)){}
        if(!std::isprint(b)){}
    }
    */