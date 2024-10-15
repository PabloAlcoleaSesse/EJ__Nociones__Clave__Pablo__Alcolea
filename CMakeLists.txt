cmake_minimum_required(VERSION 3.29)
project(EJ__Nociones__Clave__Pablo__Alcolea)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


add_executable(EJ__Nociones__Clave__Pablo__Alcolea
    "Proyecto_1/Estudiante.cpp"
    "Proyecto_1/Estudiante.h"
    "Proyecto_1/Main.cpp"
    "Proyecto_1/Main.h"
    "Proyecto_1/Persona.cpp"
    "Proyecto_1/Persona.h")

add_executable(EJ__Nociones__Clave__Pablo__Alcolea__2
        "Proyecto_2/main2.cpp"
        "Proyecto_2/nuevo.cpp"
        "Proyecto_2/matematicas.cpp"
        "Proyecto_2/funciones.cpp")

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(EJ__Nociones__Clave__Pablo__Alcolea__2 PRIVATE fmt::fmt)

add_library(matematicas STATIC "Proyecto_2/matematicas.cpp")
target_link_libraries(EJ__Nociones__Clave__Pablo__Alcolea__2 PRIVATE matematicas)
