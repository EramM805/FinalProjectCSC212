cmake_minimum_required (VERSION 3.0)

project (Black_Jack)

set(HEADER_FILES table.h table1.template node.h llist.h)
add_library(node node.cpp ${HEADER_FILES}) 
add_library(llist llist.cpp ${HEADER_FILES}) 
add_executable(blackjack blackjack.cxx ${HEADER_FILES})
target_link_libraries(blackjack llist)
target_link_libraries(blackjack node)

target_compile_options(blackjack PRIVATE -std=c++17 -g -Wall)