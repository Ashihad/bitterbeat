add_library(
  ${ENTITY_NAME}
  "Entity.cpp"
  "Entity.hpp"
)

target_link_libraries(${ENTITY_NAME} PRIVATE "SFML::Graphics")
target_include_directories(${ENTITY_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/world)
