add_executable(tests TestCatch.cpp TestConcepts.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain mcmc_samplers)

include(Catch)
catch_discover_tests(tests)