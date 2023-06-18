#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing GC content function") {
	REQUIRE(get_gc_content("CCABCDFG") == 50);
	REQUIRE(get_gc_content("CC") == 100);
	REQUIRE(get_gc_content("CCABDEFHIJ") == 20);
	REQUIRE(get_gc_content("AGCTATAG") == 37.5);
}