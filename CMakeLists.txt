cmake_minimum_required(VERSION 3.15)
project(comp_prog)

set(CMAKE_CXX_STANDARD 14)


add_executable(main_hello_world main_hello_world.cpp)
add_executable(heap prelude/trees/heap.cpp)
add_executable(unordmap hackerrank/unordmap.cpp)
add_executable(migr_birds hackerrank/migr_birds.cpp)
add_executable(twodvect hackerrank/twodvect.cpp)
add_executable(2darray_vect hackerrank/2darray_vect.cpp)
add_executable(heapsort prelude/trees/heapsort.cpp)
add_executable(monk prelude/trees/monk.cpp)
add_executable(nat hackerrank/nat.cpp)
add_executable(inord_stack prelude/trees/inord_stack.cpp)
add_executable(levl_ord_trav_tree prelude/trees/levl_ord_trav_tree.cpp)
add_executable(disp_seg codeforces/disp_seg.cpp)
add_executable(ris codeforces/ris.cpp)
add_executable(theatre codechef/theatre.cpp)
add_executable(ancestor prelude/trees/ancestor.cpp)
add_executable(first codechef/first.cpp)