cmake_minimum_required(VERSION 3.16)
project(logcore)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(SOURCES
    src/logcore.cc
)
add_library(logcore STATIC
    ${SOURCES}
)
target_include_directories(logcore PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include  # logcore/include 目录
)
target_compile_features(logcore PUBLIC cxx_std_17)