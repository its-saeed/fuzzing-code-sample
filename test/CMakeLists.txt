set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=fuzzer,address")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=fuzzer,address")

file(GLOB fuzz_test_names ${CMAKE_CURRENT_SOURCE_DIR}/**/*.cpp)

set(SRC_DIRECTORY ${CMAKE_SOURCE_DIR}/src)
file(GLOB SUBDIRS RELATIVE ${SRC_DIRECTORY} LIST_DIRECTORIES true ${SRC_DIRECTORY}/*)
foreach(SUBDIR ${SUBDIRS})
	set(FULL_PATH_SUBDIRECTORY ${SRC_DIRECTORY}/${SUBDIR})
	if(IS_DIRECTORY ${FULL_PATH_SUBDIRECTORY})
		include_directories(${FULL_PATH_SUBDIRECTORY})
	endif()
endforeach()


foreach(fuzz_test_name IN LISTS fuzz_test_names)
    set(fuzz_test_exe_name ${fuzz_test_name})

    file(RELATIVE_PATH fuzz_test_exe_name ${CMAKE_CURRENT_SOURCE_DIR} ${fuzz_test_name})
    cmake_path(REMOVE_EXTENSION fuzz_test_exe_name)
    string(REPLACE "/" "__" fuzz_test_exe_name ${fuzz_test_exe_name})
    
    add_executable(${fuzz_test_exe_name} ${fuzz_test_name})
    target_link_libraries(${fuzz_test_exe_name} ${LIBRARY_NAME})
endforeach()
