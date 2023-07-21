#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays.h"
#include "arrays.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Delete Adjust elements function")
{
	const int SIZE = 5;
	int list[SIZE];
	ArrayList aList(list, SIZE);

	aList.Add(5);
    aList.Add(7);
    aList.Add(10);
    aList.Add(15);
    aList.Add(20);

	REQUIRE(aList.Size() == 5);

	REQUIRE(aList.Get_First_Index_Of(5) == 0);

	aList.Delete(5);

	REQUIRE(aList.Size() == 4);

	REQUIRE(aList.Get_Value_At_Index(0) == 7);
    REQUIRE(aList.Get_Value_At_Index(1) == 10);
    REQUIRE(aList.Get_Value_At_Index(2) == 15);
    REQUIRE(aList.Get_Value_At_Index(3) == 20);

	REQUIRE(aList.Get_First_Index_Of(5) == -1);
}

TEST_CASE("Test arraylist capacity")
{
	const int SIZE = 3;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Capacity() == 3);
}

TEST_CASE("Test arraylist size")
{
	const int SIZE = 3;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);
}

TEST_CASE("Test arraylist Add")
{
	const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);

	array_list.Add(8);

	REQUIRE(array_list.Size() == 1);

	array_list.Add(5);
	REQUIRE(array_list.Size() == 2);

	array_list.Add(20);
	REQUIRE(array_list.Size() == 3);
}

TEST_CASE("Test array list get first index of")
{
	
	const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);
	array_list.Add(8);
	array_list.Add(5);
	array_list.Add(20);
	array_list.Add(5);

	int index = array_list.Get_First_Index_Of(5);

	REQUIRE(index == 1);

	index = array_list.Get_First_Index_Of(20);

	REQUIRE(index == 2);
}

TEST_CASE("Test get value at index")
{
const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);
	array_list.Add(8);
	array_list.Add(5);
	array_list.Add(20);
	array_list.Add(5);

	int value = array_list.Get_Value_At_Index(1);
	REQUIRE(value == 5);
}

TEST_CASE("Test get value at index w -1")
{
const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);
	array_list.Add(8);
	array_list.Add(5);
	array_list.Add(20);
	array_list.Add(5);

	int value = array_list.Get_Value_At_Index(-1);
	REQUIRE(value == -1);
}

TEST_CASE("Test get value at index w 5")
{
const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);
	array_list.Add(8);
	array_list.Add(5);
	array_list.Add(20);
	array_list.Add(5);

	int value = array_list.Get_Value_At_Index(5);
	REQUIRE(value == -1);
}