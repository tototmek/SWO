add_executable(MoungTests MoungTests.cpp)
target_link_libraries(MoungTests Moung)
add_test(NAME MoungTests COMMAND MoungTests)