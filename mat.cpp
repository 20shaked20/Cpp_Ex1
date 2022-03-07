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
    // // input checkings:
    // // bad case for rows and col, they are even.
    // if (rows % 2 == 0 || cols % 2 == 0)
    // {
    //     exit(1);
    // }
    // // bad case for characters
    // if (!chars_check(a) && !chars_check(b))
    // {
    //     exit(1);
    // }
    // std::string ans;

    // // the idea is to insert to the boundry location each time
    // int start = 0;
    // int end_c = cols - 1;
    // int end_r = rows - 1;
    // for (int i = 0; i < cols; ++i)
    // {
    //     for (int j = 0; j < rows; ++j)
    //     {

    //         if ((i == 0 || j == 0 || i == end_c || j == end_r))
    //         {
    //             ans += a;
    //         }
    //         else if (i == 1 || j == 1 || i == end_c - 1 || j == end_r - 1)
    //         {
    //             ans += b;
    //         }
    //         else
    //         {
    //             ans += a;
    //         }
    //     }
    //     // start+=1;
    //     // end_c -= 1;
    //     // end_r -= 1;
    //     ans += '\n';
    // }
    // return ans;
    return "BLA";
}