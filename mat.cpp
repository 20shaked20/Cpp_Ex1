#include <iostream>
#include "mat.hpp"
#include <string>
// using namespace ariel; // includes mat
// using namespace std; // includes string..

// // private checker.
// bool chars_check(char a)
// {
//     int ascii = a;
//     // good case for inputs, i exclude numbers and letters only good chars
//     if ((ascii > 32 && ascii < 46) || (ascii > 57 && ascii < 65))
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

std::string ariel::mat(int rows, int cols, char a, char b)
{
//     // input checkings:
//     // bad case for rows and col, they are even.
//     if (rows % 2 == 0 || cols % 2 == 0)
//     {
//         exit(1);
//     }
//     // bad case for characters
//     if (!chars_check(a) && !chars_check(b))
//     {
//         exit(1);
//     }

//     char ans[rows][cols];
    
//     // work on array 
//     for(int i = 0; i<cols; ++i){
//         for (int j = 0; j< rows; ++j){
//             if ( i == 0 || j == 0 || i == cols-1 || j == rows -1){
//                 ans[i][j] = a;
//             }else{
//                 ans[i][j] = b;
//             }
//         }
//     }

//     // convert to string
//     std::string s;
//     for(int i = 0; i<cols; ++i){
//         for (int j = 0; j< rows; ++j){
//             s+=ans[i][j];
//         }
//         s+='\n';
//     }
//     return s;
    return "BLA";
}