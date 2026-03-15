add_library(
  ${BUTTON_NAME}
  "Button.cpp"
  "Button.hpp"
)

target_link_libraries(${BUTTON_NAME} PRIVATE "SFML::Graphics")
