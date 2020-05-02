cmake_minimum_required(VERSION 3.14)
project(tarea3)

file(GLOB SOURCE
        "src/*"
        "src/clases/*"
        )

add_executable(tarea3 ${SOURCE})