cmake_minimum_required(VERSION 3.15)
project(competitive_coding)

set(CMAKE_CXX_STANDARD 14)


add_executable(main_hello_world main_hello_world.cpp)
add_executable(sort_stack prelude/stack/sort_stack.cpp)
add_executable(stair_heav approach_techn/dp/stair_heav.cpp)
add_executable(on_way_home approach_techn/dp/on_way_home.cpp)
add_executable(nextgrtr_unorder_stack prelude/stack/nextgrtr_unorder_stack.cpp)
add_executable(goldmine approach_techn/dp/goldmine.cpp)
add_executable(subset_sum approach_techn/subset_sum.cpp)
add_executable(rod_cutting approach_techn/dp/rod_cutting.cpp)
add_executable(mod_mult_inverse prelude/mod_mult_inverse.cpp)