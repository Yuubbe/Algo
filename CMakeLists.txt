cmake_minimum_required(VERSION 3.10)  # version plus réaliste
project(Algo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(exo1 exo_perso/ex1.cpp
        exo_perso/exo4.cpp
        TD3/exo1.cpp)
add_executable(exo2 exo_perso/exo2.cpp)
add_executable(exo3 exo_perso/ex3.cpp)
