//
// Created by Davide Nicoli on 18/05/22.
//

#include <catch2/catch.hpp>

#include "library.h"

TEST_CASE( "Trying Catch2", "[catch2]" ) {
    SECTION("Assert call to constant") {
        REQUIRE(test_constant() == 42);
    }
    SECTION( "Assert float product") {
        REQUIRE(test_product(3.0) == 6.0);
    }
}