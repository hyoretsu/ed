set(name "calculadora_num_complexos")
set(lib1 "num_complexos")

project(${name})
cmake_minimum_required(VERSION 2.8.8)

add_library(${lib1} OBJECT implementations/${lib1}.c)
add_executable(main main.c)
target_link_libraries(main ${lib1})

set_target_properties(
    main
    PROPERTIES
        OUTPUT_NAME ${name}
        SUFFIX ".exe"
)

if (NOT WIN32)
	target_link_libraries(main m)
endif()
