include_directories(${Morpion_SOURCE_DIR}/include)

SET(GCC_COVERAGE_COMPILE_FLAGS -g -Wall -Wextra)
SET(GCC_COVERAGE_LINK_FLAGS    -lX11 -lGL -lpthread -lpng)# -lstdc++fs)

# SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
# SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

file(
    GLOB_RECURSE SOURCE_FILES
    CONFIGURE_DEPENDS  # Automatically reconfigure if source files are added/removed.
    ${Morpion_SOURCE_DIR}/src/*.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# target_compile_options(${PROJECT_NAME} PUBLIC ${GCC_COVERAGE_COMPILE_FLAGS})
# target_link_libraries(${PROJECT_NAME} PRIVATE ${GCC_COVERAGE_LINK_FLAGS})
target_link_libraries(${PROJECT_NAME} PRIVATE X11 GL pthread png) # stdc++fs)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
