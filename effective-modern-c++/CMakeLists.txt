find_package(Threads REQUIRED)

add_executable(effective_modern_c++_01 effective_modern_c++_01.cc)
add_executable(effective_modern_c++_02 effective_modern_c++_02.cc)
add_executable(effective_modern_c++_03 effective_modern_c++_03.cc)
add_executable(effective_modern_c++_04 effective_modern_c++_04.cc)
target_link_libraries(effective_modern_c++_04 PRIVATE pthread)
add_executable(effective_modern_c++_05 effective_modern_c++_05.cc)
