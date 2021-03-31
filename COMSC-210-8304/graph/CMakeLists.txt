cmake_minimum_required(VERSION 3.5)
project(s3sample)
find_package(AWSSDK REQUIRED COMPONENTS s3)
set(CMAKE_CXX_STANDARD 11)
add_executable(s3sample "program.cpp")
# list all deps for static linking
target_link_libraries(s3sample ${AWSSDK_LINK_LIBRARIES})
target_compile_options(s3sample PRIVATE "-Wall" "-Werror" "-std=c++11")
