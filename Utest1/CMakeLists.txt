cmake_minimum_required(VERSION 3.16)
project(XMLGen)

set(CMAKE_CXX_STANDARD 17)

add_executable(XMLGen main.cpp project_lib/CsvLoader.cpp project_lib/CsvLoader.hpp project_lib/CsvLine.cpp project_lib/CsvLine.hpp project_lib/XMLform.cpp project_lib/XMLform.hpp project_lib/CsvForm.cpp project_lib/CsvForm.hpp project_lib/dataSearch.cpp project_lib/dataSearch.hpp doctest_test/test_.cpp Utest1/main.cpp)

target_link_libraries(XMLGen project_lib Catch2::Catch2)

