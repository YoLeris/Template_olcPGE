cmake_minimum_required(VERSION 3.13)

# set the project name and version
project(Morpion VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED True)

# Keep all runtime files in one directory.
# Set the directory for the output of the program to this directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")  

# Adding the subdirectories
add_subdirectory(src)



# setup installer
include(InstallRequiredSystemLibraries)
include(CPack)

