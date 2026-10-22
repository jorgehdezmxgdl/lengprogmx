cmake_minimum_required(VERSION 4.3)
project(agenda)

set(CMAKE_CXX_STANDARD 20)

add_executable(agenda main.cpp
        Persona.cpp
        Persona.h
        Ejecuta.cpp
        Archivo.cpp
        Archivo.h)
