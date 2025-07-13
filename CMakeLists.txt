# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(FuzzingCodeSample VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message("----------------- ${CMAKE_CURRENT_SOURCE_DIR}")

# Add an library
file(GLOB source_file ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.cpp)
file(GLOB header_file ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.h)
add_library(${PROJECT_NAME} ${source_file}) 
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${header_file}")

# Install target and headers
install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	PUBLIC_HEADER DESTINATION include
)
