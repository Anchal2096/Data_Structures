cmake_minimum_required(VERSION 3.14)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures main.cpp Linked_List.h DoublyLinkedList.h circularqueue.h)
add_executable(Queues main2.cpp queue.h)
add_executable(Quick_sort main3.cpp quicksort.h)
add_executable(infix_to_postfix infix_to_postfix.cpp)