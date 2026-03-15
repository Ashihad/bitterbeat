add_executable(${TEST_NAME} "test_placeholder.cpp")

target_include_directories(
  ${TEST_NAME}
  PUBLIC
    "../hdr"
    "./"
)

target_link_libraries(${TEST_NAME} PUBLIC ${LIBRARY_NAME})
target_link_libraries(${TEST_NAME} PRIVATE GTest::gtest_main)
