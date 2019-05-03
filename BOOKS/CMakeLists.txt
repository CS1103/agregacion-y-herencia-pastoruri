cmake_minimum_required(VERSION 3.14)
project(BOOKS)

set(CMAKE_CXX_STANDARD 17)

add_executable(BOOKS main.cpp BIblioteca.cpp BIblioteca.h Volumenes.cpp Volumenes.h Libro.cpp Libro.h Revista.cpp Revista.h)