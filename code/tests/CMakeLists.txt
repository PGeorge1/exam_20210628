include_directories(../src)
include_directories(.)

add_executable(RingBufferTests
    # list of tests
    ringbuf.cpp

    # list of sources
    ../src/ringbuf.hpp
    
    # gtest sources
    gtest/gtest-all.cc
    gtest/gtest_main.cc
)

# add pthread for unix systems
if (UNIX)
    target_link_libraries(tests pthread)
endif ()
