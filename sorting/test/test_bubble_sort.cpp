#include <catch2/catch.hpp>
#include "bubble_sort.h"

TEST_CASE("Bubble Sort - Individual Assignment", "[bubble]") {
    int arr[] = {16, 9, 5, 18, 1, 11, 7, 3};
    bubbleSort(arr, 8);
    REQUIRE(arr[0] == 1);
    REQUIRE(arr[7] == 18);
}

TEST_CASE("Bubble Sort - Empty Array", "[bubble]") {
    int* arr = nullptr;
    bubbleSort(arr, 0);
    REQUIRE(true);
}

TEST_CASE("Bubble Sort - Single Element", "[bubble]") {
    int arr[] = {42};
    bubbleSort(arr, 1);
    REQUIRE(arr[0] == 42);
}

TEST_CASE("Bubble Sort - Reverse Order", "[bubble]") {
    int arr[] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    REQUIRE(arr[0] == 1);
}
