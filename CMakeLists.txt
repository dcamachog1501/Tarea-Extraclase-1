cmake_minimum_required(VERSION 3.13)
project(LinkedClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(LinkedClass Main/main.cpp Estructure/Node.cpp Estructure/Node.h Estructure/Manager.cpp Estructure/Manager.h Collector/Collector.cpp Collector/Collector.h Collector/LinkedListC.cpp Collector/LinkedListC.h Collector/CNode.cpp Collector/CNode.h Estructure/LinkedList.cpp Estructure/LinkedList.h)