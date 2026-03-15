add_library(
  ${WORLD_NAME}
  "World.cpp"
  "World.hpp"
)

target_link_libraries(${WORLD_NAME} PRIVATE "SFML::Graphics")
