# Link defaults to every target under src/
link_libraries(PROJECT_DEFAULTS)

set(LOGGER_NAME "logger")
add_subdirectory(logger)

set(WORLD_NAME "world")
add_subdirectory(world)

set(ENTITY_NAME "entity")
add_subdirectory(entity)

set(PARTICLE_NAME "particle")
add_subdirectory(particle)

set(BUTTON_NAME "button")
add_subdirectory(button)

set(RENDERER_NAME "renderer")
add_subdirectory(renderer)

set(GAME_NAME "game")
add_subdirectory(game)

add_executable(${BINARY_NAME} "main.cpp")
target_include_directories(${BINARY_NAME} PRIVATE "game/")

target_link_libraries(
  ${BINARY_NAME}
  PRIVATE
    ${LOGGER_NAME}
    ${WORLD_NAME}
    ${ENTITY_NAME}
    ${PARTICLE_NAME}
    ${BUTTON_NAME}
    ${RENDERER_NAME}
    ${GAME_NAME}
)
