//
// Created by Davide Nicoli on 18/05/22.
//

#include <catch2/catch.hpp>

#include "mcmc_sampler.hpp"

TEST_CASE("Concepts testing", "[concepts]") {
    SECTION("Simple concepts") {
        REQUIRE(divide(4.0, 2.0) == Approx(2.0));
    }
}