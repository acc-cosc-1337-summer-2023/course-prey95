#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing the get letter if function") {
	REQUIRE(get_letter_grade_using_if(92) == 'A');
	REQUIRE(get_letter_grade_using_if(80) == 'B');
	REQUIRE(get_letter_grade_using_if(78) == 'C');
	REQUIRE(get_letter_grade_using_if(64) == 'D');
	REQUIRE(get_letter_grade_using_if(59) == 'F');


	REQUIRE(get_letter_grade_using_switch(95) == 'A');
	REQUIRE(get_letter_grade_using_switch(85) == 'B');
	REQUIRE(get_letter_grade_using_switch(75) == 'C');
	REQUIRE(get_letter_grade_using_switch(65) == 'D');
	REQUIRE(get_letter_grade_using_switch(50) == 'F');
}