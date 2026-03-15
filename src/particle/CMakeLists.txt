add_library(
  ${PARTICLE_NAME}
  "Particle.cpp"
  "Particle.hpp"
)
target_link_libraries(${PARTICLE_NAME} PRIVATE "SFML::Graphics")

target_link_libraries(${PARTICLE_NAME} PUBLIC ${ENTITY_NAME})
target_include_directories(
  ${PARTICLE_NAME}
  PUBLIC
    ${CMAKE_SOURCE_DIR}/src/entity
)
