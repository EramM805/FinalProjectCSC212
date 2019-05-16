cmake_minimum_required (VERSION 3.0)

project (Black_Jack)

set(HEADER_FILES table.h table1.template)
add_library(table1 blackjack.cxx ${HEADER_FILES}) 

add_executable(blackjack blackjack.cxx ${HEADER_FILES})

target_compile_options(blackjack PRIVATE -std=c++17 -g -Wall)