add_executable(${BINARY_NAME} "main.cpp")
target_include_directories(${BINARY_NAME} PUBLIC "../hdr")
target_link_libraries(${BINARY_NAME} PRIVATE "SFML::Graphics")

target_set_warnings(TARGET ${BINARY_NAME} ENABLE "YES" AS_ERRORS
                    ${ENABLE_WARNINGS_AS_ERRORS})
