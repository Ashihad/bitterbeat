add_library(
  ${GAME_NAME}
  "Game.cpp"
  "Game.hpp"
)

target_link_libraries(${GAME_NAME} PUBLIC "SFML::Graphics")
target_link_libraries(${GAME_NAME} PUBLIC ${LOGGER_NAME})
target_include_directories(${GAME_NAME} PRIVATE "../logger/")
