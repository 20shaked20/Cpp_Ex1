#include <iostream>
#include "mat.hpp"
#include <string>
#include <array>  // tidy
#include <vector> // tidy

void input_check(int cols, int rows, char a, char b)
{

    if (rows % 2 == 0 || cols % 2 == 0)
    {
        std::__throw_out_of_range("Mat size is always odd");
        exit(1);
    }
    if (rows < 0 || cols < 0)
    {
        std::__throw_out_of_range("negative values");
        exit(1);
    }
    if (std::isprint(a) == 0 || std::isprint(b) == 0 || a == ' ' || b == ' ')
    {
        std::__throw_invalid_argument("Bad symbol");
        exit(1);
    }
}

/**
 * @brief
 * Main method for creating the mat
 * @param cols Column number
 * @param rows row number
 * @param a symbol a
 * @param b symbol b
 * @return std::string
 */
std::string ariel::mat(int cols, int rows, char a, char b)
{
    input_check(cols,rows,a,b);
    /**
     * @brief this algortihm i wrote, is based on always printing inner circle.
     * meaning, i start with printing the outer bounds, and then shrink the circle everytime.
     * it lasts untill x reached the inner bounds of the matrix.
     * @param ans - temporary matrix im manipulation
     * @param less - how much the reduce from the matrix to get the inner bound.
     * @param x - the iterator index.
     */
    char ans[rows][cols];
    int less = 1;
    int x = 0;
    while (x < rows && x < cols)
    {
        for (int i = x; i < rows - x; ++i)
        {
            for (int j = x; j < cols - x; ++j)
            {
                if (i == x || i == rows - less || j == x || j == cols - less)
                {
                    if (x % 2 == 0)
                    {
                        ans[i][j] = a;
                    }
                    else if (x % 2 == 1)
                    {
                        ans[i][j] = b;
                    }
                }
                else
                {
                    if (x % 2 == 0)
                    {
                        ans[i][j] = b;
                    }
                    else if (x % 2 == 1)
                    {
                        ans[i][j] = a;
                    }
                }
            }
        }
        ++x;
        ++less;
    }
    // convert to string:
    std::string s;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            s += ans[i][j];
        }
        s += '\n';
    }
    return s;
}