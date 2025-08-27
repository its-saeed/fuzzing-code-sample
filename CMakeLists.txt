# Minimum CMake version required
cmake_minimum_required(VERSION 3.22)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# Project name and version
project(FuzzingCodeSample VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Add an library
file(GLOB source_file ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.cpp)
file(GLOB header_file ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.h)
set(LIBRARY_NAME ${PROJECT_NAME})
add_library(${LIBRARY_NAME} ${source_file}) 
set_target_properties(${LIBRARY_NAME} PROPERTIES PUBLIC_HEADER "${header_file}")

# Install target and headers
install(TARGETS ${LIBRARY_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	PUBLIC_HEADER DESTINATION include/fuzzing-code-sample
)

add_subdirectory(test)
