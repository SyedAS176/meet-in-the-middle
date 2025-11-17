cmake_minimum_required(VERSION 3.24)

project(meet_in_the_middle)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(median_test
        tests/median_test.cpp
        src/dynamic_array.cpp
        src/dynamic_array.hpp
        src/median.cpp
        src/median.hpp
)

add_executable(main main.cpp
        src/dynamic_array.cpp
        src/dynamic_array.hpp
        src/median.cpp
        src/median.hpp
        tests/median_test.cpp
        tests/dynamic_array_test.cpp
)


target_link_libraries(median_test PRIVATE Catch2::Catch2WithMain)
