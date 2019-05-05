cmake_minimum_required(VERSION 3.12)
project(BOOKS)

set(CMAKE_CXX_STANDARD 17)

add_executable(BOOKS main.cpp Biblioteca.cpp Biblioteca.h Libro.cpp Libro.h Volumen.cpp Volumen.h Revista.cpp Revista.h test.cpp catch.hpp)