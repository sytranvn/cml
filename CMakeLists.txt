cmake_minimum_required(VERSION 3.13) # CMake version check
project(cml) # Create project
set(CMAKE_C_STANDARD 23) # Enable c23
set(CMAKE_CXX_STANDARD 17) # Enable cpp17
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


find_package(GSL REQUIRED)

include_directories(include)
file(GLOB SOURCE_FILES src/*.h src/*.c)
# Add executable target with source files listed in SOURCE_FILES variable
add_executable(${PROJECT_NAME} main.c ${SOURCE_FILES} )


target_link_libraries(${PROJECT_NAME} PRIVATE GSL::gsl GSL::gslcblas)
# include_directories(tests)
