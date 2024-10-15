cmake_minimum_required(VERSION 3.29)
project(EJ__Nociones__Clave__Pablo__Alcolea)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


add_executable(EJ__Nociones__Clave__Pablo__Alcolea
    "Proyecto 1/Estudiante.cpp"
    "Proyecto 1/Estudiante.h"
    "Proyecto 1/Main.cpp"
    "Proyecto 1/Main.h"
    "Proyecto 1/Persona.cpp"
    "Proyecto 1/Persona.h")

add_executable(EJ__Nociones__Clave__Pablo__Alcolea__2
        "Proyecto 2/main2.cpp"
        "Proyecto 2/nuevo.cpp"
        "Proyecto 2/matematicas.cpp"
        "Proyecto 2/funciones.cpp")

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(EJ__Nociones__Clave__Pablo__Alcolea__2 PRIVATE fmt::fmt)

add_library(matematicas STATIC "Proyecto 2/matematicas.cpp")
target_link_libraries(EJ__Nociones__Clave__Pablo__Alcolea__2 PRIVATE matematicas)
