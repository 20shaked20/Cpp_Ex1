/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Shaked Levi>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good input") { // first,third = rows : second,fourth = rows 
    
	//1
	CHECK(nospaces(mat(1, 1, '@', '-')) == nospaces("@\n"));
	//2
    CHECK(nospaces(mat(3, 3, '@', '-')) == nospaces("@@@\n"
													"@-@\n"
													"@@@"));
	//3
    CHECK(nospaces(mat(5, 5, '@', '-')) == nospaces("@@@@@@\n"
													"@---@\n"
													"@-@-@\n"
													"@---@\n"
													"@@@@@"));
	//4
	CHECK(nospaces(mat(7, 3, '$', '~')) == nospaces("$$$$$$$\n"
													"$~~~~~$\n"
													"$$$$$$$"));
	//5													
	CHECK(nospaces(mat(9, 5, '#', '*')) == nospaces("#########\n"
													"#*******#\n"
													"#*#####*#\n"
													"#*******#\n"
													"#########"));
	//6 > your test
	CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
													"@-------@\n"
													"@-@@@@@-@\n"
													"@-@---@-@\n"
													"@-@@@@@-@\n"
													"@-------@\n"
													"@@@@@@@@@"));
	//7  
	CHECK(nospaces(mat(9, 9, '-', '#')) == nospaces("---------\n"
													"-#######-\n"
													"-#-----#-\n"
													"-#-###-#-\n"
													"-#-#-#-#-\n"
													"-#-###-#-\n"
													"-#-----#-\n"
													"-#######-\n"
													"---------"));
	//8
	CHECK(nospaces(mat(7, 7, '~', '$')) == nospaces("~~~~~~~\n"
													"~$$$$$~\n"
													"~$~~~$~\n"
													"~$~$~$~\n"
													"~$~~~$~\n"
													"~$$$$$~\n"
													"~~~~~~~"));
	//9
	CHECK(nospaces(mat(5, 9, '@', '-')) == nospaces("@@@@@\n"
													"@---@\n"
													"@-@-@\n"
													"@-@-@\n"
													"@-@-@\n"
													"@-@-@\n"
													"@-@-@\n"
													"@---@\n"
													"@@@@@"));
	//10
	CHECK(nospaces(mat(3, 5, '$', '*')) == nospaces("$$$\n"
													"$*$\n"
													"$*$\n"
													"$*$\n"
													"$$$\n"));
	//11
	CHECK(nospaces(mat(5, 7, '$', '-')) == nospaces("$$$$$\n"
													"$---$\n"
													"$-$-$\n"
													"$-$-$\n"
													"$-$-$\n"
													"$---$\n"
													"$$$$$\n"));
	//12
	CHECK(nospaces(mat(1, 3, '$', '-')) == nospaces("-\n"
													"-\n"
													"-\n"));

}

TEST_CASE("Bad input") {
	//1
    CHECK_THROWS(mat(2, 2, '$', '%')); // even rows & cols
	//2
	CHECK_THROWS(mat(-1, 2, '$', '%')); // negtavie rows
	//3
	CHECK_THROWS(mat(-1, -1, '$', '%')); // negative rows/cols
	//4
	CHECK_THROWS(mat(5, 7, -1, '%')); // one integer instead of string
	//5
	CHECK_THROWS(mat(5, 7, -1, 7)); // integers instead of string 
	//6
	CHECK_THROWS(mat('5','6',5,3)); // switching places with strings and ints
	//7
	CHECK_THROWS(mat(10, 5, '$', '%')); // your test
	//8
	CHECK_THROWS(mat(10, 10, '@', '-'));

   
}

