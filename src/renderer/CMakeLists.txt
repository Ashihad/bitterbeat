add_library(
  ${RENDERER_NAME}
  "Renderer.cpp"
  "Renderer.hpp"
)

target_link_libraries(${RENDERER_NAME} PRIVATE "SFML::Graphics")
