#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Testing the max value function") {
	vector<int> TestMaxV = {5, 7, -1, 99, -100, 10};
	vector<int> TestMaxV2 = {-50, 0, -51, 50, -99, -100};

	REQUIRE(get_vector_max_value(TestMaxV) == 99);
	REQUIRE(get_vector_max_value(TestMaxV2) == 50);
}

TEST_CASE("Testing the square vector function") {
	vector<int> TestSquareV = {6, 1, 8, 9, 4};
    vector<int> TestSquareV2 = {3, 7, 2, 5, 10};
	vector<int> temp = {9, 49, 4, 25, 100};
	vector<int> temp1 = {36, 1, 64, 81, 16};

	REQUIRE(squareVec(TestSquareV2) == temp);
	REQUIRE(squareVec(TestSquareV) == temp1);
}