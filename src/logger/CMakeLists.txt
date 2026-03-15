add_library(
  ${LOGGER_NAME}
  "Logger.cpp"
  "Logger.hpp"
)

target_link_libraries(${LOGGER_NAME} PRIVATE "SFML::Graphics")
