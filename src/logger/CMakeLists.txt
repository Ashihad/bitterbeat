add_library(${LOGGER_NAME} "Logger.cpp" "Logger.hpp")
target_link_libraries(${LOGGER_NAME} PRIVATE "SFML::Graphics")

target_set_warnings(TARGET ${LOGGER_NAME} ENABLE "YES" AS_ERRORS
                    ${ENABLE_WARNINGS_AS_ERRORS})
