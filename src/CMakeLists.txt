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

add_executable(${BINARY_NAME} "main.cpp")
target_include_directories(${BINARY_NAME} PUBLIC "logger/")
target_link_libraries(${BINARY_NAME} PRIVATE "SFML::Graphics")

target_link_libraries(
  ${BINARY_NAME}
  PUBLIC
    ${LOGGER_NAME}
    ${WORLD_NAME}
    ${ENTITY_NAME}
    ${PARTICLE_NAME}
    ${BUTTON_NAME}
)

target_set_warnings(TARGET ${BINARY_NAME} ENABLE "YES" AS_ERRORS
                    ${ENABLE_WARNINGS_AS_ERRORS}
)
